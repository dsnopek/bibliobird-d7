#!/bin/bash

if [ -z "$DRUSH" ]; then
  DRUSH=`which drush5`

  if [ -z "$DRUSH" ]; then
  	DRUSH=`which drush`
  fi
fi

$DRUSH make --download-mechanism='drush_make' --working-copy --no-core --no-gitinfofile --contrib-destination=. drupal-org.make

