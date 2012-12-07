<?php
/**
 * @file
 * bibliobird_newsletter.features.inc
 */

/**
 * Implements hook_default_mailchimp_list().
 */
function bibliobird_newsletter_default_mailchimp_list() {
  $items = array();
  $items['bibliobird_newsletter'] = entity_import('mailchimp_list', '{
    "name" : "bibliobird_newsletter",
    "mc_list_id" : "8c3fd79d90",
    "label" : "Bibliobird newsletter",
    "description" : "E-mail newsletter about everything happening on Bibliobird, including changes, plans and popular discussions (1-2 e-mail per month)",
    "list_type" : "optional",
    "settings" : {
      "roles" : { "2" : "2" },
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "name", "LNAME" : "" },
      "doublein" : 0,
      "show_register_form" : 1,
      "show_account_form" : 1,
      "include_interest_groups" : 0,
      "interest_groups_label" : "Options",
      "cron" : 0,
      "webhooks" : 0
    },
    "created" : "1354914936",
    "updated" : "1354918221"
  }');
  return $items;
}
