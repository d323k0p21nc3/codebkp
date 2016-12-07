/**
 * Created by Prince on 11/23/2016.
 */

function _name() {
        postAsk("ask", "introduction", "name_self", JSONinputs.introduction[0].name_self);

        setTimeout(function (){
         set_input(JSONinputs.introduction[0].name_self);
        }, 3000);

}

function desc_self() {
    postAsk("ask", "introduction", "desc_self", JSONinputs.introduction[0].desc_self);

    setTimeout(function (){
        set_input(JSONinputs.introduction[0].desc_self);
    }, 5000);

}

function purpose_self() {
    postAsk("ask", "introduction", "purpose_self", JSONinputs.introduction[0].purpose_self);

    setTimeout(function (){
        set_input(JSONinputs.introduction[0].purpose_self);
    }, 5000);

}