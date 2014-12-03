(function($) {
  $(document).ready(function() {
    // Get Data
    $.getJSON(window.location.protocol + '://' + window.location.host + '/api/v1.0/operations?filter[type]=country&filter[status]=active', function(data) {
        $(data.data).each(function(i) {
            // Set country code
            if(data.data[i].country != null) {
                data.data[i].mapCode = data.data[i].country.pcode;
            }
            //Format date
            var launchDate = new Date(data.data[i].launch_date*1000);
            console.log(launchDate);
            data.data[i].launch_date = launchDate.getDate() + "/" + (1+launchDate.getMonth()) + "/" + launchDate.getFullYear();
        });

        // Initiate the chart
        $('#operations_map').highcharts('Map', {
            colors: ['#BC2E3B'],
            chart : {
                backgroundColor : '#E0ECED'
            },
            title : {
                text : ''
            },
            legend: {
                enabled: false
            },
            plotOptions: {
                map: {
                    joinBy: ['iso-a2', 'mapCode'],
                    dataLabels: {
                        enabled: true,
                        format: '{point.label}'
                    },
                    mapData: Highcharts.maps['custom/world'],
                    tooltip: {
                        headerFormat: '',
                        pointFormat: '<b>{point.name}</b><br/>{point.email}<br/>Launched: {point.launch_date}'
                    }

                }
            },
            series : [{
                data : data.data, //empty
                name: ' ',
                states: {
                    hover: {
                        color: '#DD5763'
                    }
                }
            }]
        });
    });
  });
})(jQuery);
