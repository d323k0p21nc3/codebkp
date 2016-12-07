/**
 * Created by Prince on 11/23/2016.
 */
var JSONinputs = "";

var topic_introduction_done = 1;

var name_done = 1;
var desc_self_done = 0;
var purpose_self_done = 0;


var topic_passion_diagnosis_done = 0;

var see_what_done = 1;
var affirm_symptoms_done = 0;
var disease_period_done = 0;
var final_diagnosis_done = 0;


var topic_disease_containment_done = 0;

var relief_done = 1;
var maintenance_1_done = 0;
var maintenance_2_done = 0;
var maintenance_3_done = 0;
var complement_done = 0;


var topic_preventive_measures_done = 0;

var establish_base_done = 1;
var preventive_1_done = 0;
var preventive_2_done = 0;
var preventive_3_done = 0;


var topic_bye_done = 0;

var finalizing_done = 1;
var bye_done = 0;

postJSON('get_json', 'inputs.json', 'post');