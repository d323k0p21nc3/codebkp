/**
 * Created by Prince on 12/5/2016.
 */

function establish_base() {
        postAsk("ask", "preventive_measures", "establish_base", JSONinputs.preventive_measures[0].establish_base);

        setTimeout(function (){
         set_input(JSONinputs.preventive_measures[0].establish_base);
        }, 37000);

}

function preventive_1() {
        postAsk("ask", "preventive_measures", "preventive_1", JSONinputs.preventive_measures[0].preventive_1);

        setTimeout(function (){
         set_input(JSONinputs.preventive_measures[0].preventive_1);
        }, 40000);

}

function preventive_2() {
        postAsk("ask", "preventive_measures", "preventive_2", JSONinputs.preventive_measures[0].preventive_2);

        setTimeout(function (){
         set_input(JSONinputs.preventive_measures[0].preventive_2);
        }, 50000);

}

function preventive_3() {
        postAsk("ask", "preventive_measures", "preventive_3", JSONinputs.preventive_measures[0].preventive_3);

        setTimeout(function (){
         set_input(JSONinputs.preventive_measures[0].preventive_3);
        }, 55000);

}
