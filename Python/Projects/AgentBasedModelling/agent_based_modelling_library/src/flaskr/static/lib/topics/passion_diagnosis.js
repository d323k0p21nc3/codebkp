/**
 * Created by Prince on 12/5/2016.
 */

function see_what() {
        postAsk("ask", "passion_diagnosis", "see_what", JSONinputs.passion_diagnosis[0].see_what);

        setTimeout(function (){
         set_input(JSONinputs.passion_diagnosis[0].see_what);
        }, 20000);

}

function affirm_symptoms() {
        postAsk("ask", "passion_diagnosis", "affirm_symptoms", JSONinputs.passion_diagnosis[0].affirm_symptoms);

        setTimeout(function (){
         set_input(JSONinputs.passion_diagnosis[0].affirm_symptoms);
        }, 24000);

}

function disease_period() {
        postAsk("ask", "passion_diagnosis", "disease_period", JSONinputs.passion_diagnosis[0].disease_period);

        setTimeout(function (){
         set_input(JSONinputs.passion_diagnosis[0].disease_period);
        }, 22000);

}

function final_diagnosis() {
        postAsk("ask", "passion_diagnosis", "final_diagnosis", JSONinputs.passion_diagnosis[0].final_diagnosis);

        setTimeout(function (){
         set_input(JSONinputs.passion_diagnosis[0].final_diagnosis);
        }, 25000);

}