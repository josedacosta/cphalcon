
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "kernel/main.h"

/**
 * Phalcon\Filter\UserFilterInterface initializer
 */
PHALCON_INIT_CLASS(Phalcon_Filter_UserFilterInterface){

	PHALCON_REGISTER_INTERFACE(Phalcon\\Filter, UserFilterInterface, filter_userfilterinterface, phalcon_filter_userfilterinterface_method_entry);

	return SUCCESS;
}

/**
 * Filters a value
 *
 * @param mixed $value
 * @return mixed
 */
PHALCON_DOC_METHOD(Phalcon_Filter_UserFilterInterface, filter);

