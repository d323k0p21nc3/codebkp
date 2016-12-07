/**
 * Created by Prince on 12/5/2016.
 */

function relief() {
        postAsk("ask", "disease_containment", "relief", JSONinputs.disease_containment[0].relief);

        setTimeout(function (){
         set_input(JSONinputs.disease_containment[0].relief);
        }, 30000);

}

function maintenance_1() {
        postAsk("ask", "disease_containment", "maintenance_1", JSONinputs.disease_containment[0].maintenance_1);

        setTimeout(function (){
         set_input(JSONinputs.disease_containment[0].maintenance_1);
        },24000);

}

function maintenance_2() {
        postAsk("ask", "disease_containment", "maintenance_2", JSONinputs.disease_containment[0].maintenance_2);

        setTimeout(function (){
         set_input(JSONinputs.disease_containment[0].maintenance_2);
        }, 27000);

}

function maintenance_3() {
        postAsk("ask", "disease_containment", "maintenance_3", JSONinputs.disease_containment[0].maintenance_3);

        setTimeout(function (){
         set_input(JSONinputs.disease_containment[0].maintenance_3);
        }, 25000);

}

function complement() {
        postAsk("ask", "disease_containment", "complement", JSONinputs.disease_containment[0].complement);

        setTimeout(function (){
         set_input(JSONinputs.disease_containment[0].complement);
        }, 25000);

}
