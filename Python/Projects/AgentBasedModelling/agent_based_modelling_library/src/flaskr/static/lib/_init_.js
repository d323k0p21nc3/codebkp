/**
 * Created by Prince on 11/24/2016.
 */

$.ajax({
       url: 'init',
       type: 'get',
       success: function(response) {
           if (response=='done'){}
       },
       error: function(error) {
           console.log(error);
       }
   });

setTimeout(function (){
    $( "#hangout" ).removeClass( "collapsed" ).addClass("");
    }, 1000);

function printLetterByLetter(destination, message, speed){
    var i = 0;
    var interval = setInterval(function(){
        document.getElementById(destination).innerHTML += message.charAt(i);
        i++;
        if (i > message.length){
            clearInterval(interval);
        }
    }, speed);
}

var msg_init = 'Welcome to Agent Based Modelling By Prince, Vincent and William. '
    +'We will be going through a simulation of a farmer and agricultural officer. Discussing issues about the '
    +'recent passion fruit disease. Please wait while I start the simulation...';

printLetterByLetter("msg_init",msg_init,80);