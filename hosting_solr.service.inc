<?php

/**
 * The base service type class , registered with hook_hosting_service_type.
 */
class hostingService_solr extends hostingService {
 /**
  * the value stored in the service column of hosting_service table.
  */
  public $service = 'solr';
}

/**
 * An implementation of the solr service type, registered with hook_hosting_service.
 */

class hostingService_solr_lucene extends hostingService_solr {
 /**
  * the value stored in the type column of the hosting_service table.
  */
  public $type = 'lucene';


 /**
  * this service needs to have a port specified for it.
  */
  public $has_port = TRUE;

 /**
  * the default value for the port input.
  */
  function default_port() {
    return 8080;
  }

 /**
  * this service needs to be restarted with a shell command.
  */
  public $has_restart_cmd = FALSE;
}

