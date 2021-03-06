/* libmq: A library for interacting with message queues
 *
 * Author: Mo McRoberts <mo.mcroberts@bbc.co.uk>
 *
 * Copyright (c) 2014-2017 BBC
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef P_LIBMQ_H_
# define P_LIBMQ_H_                     1

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <errno.h>
# include <pthread.h>
# include <dlfcn.h>
# include <sys/types.h>
# include <dirent.h>

# include "libmq.h"
# include "libmq-engine.h"

# define PLUGINDIR                      LIBDIR "/mq/plugins"

MQ *mq_create_(const char *uri, const char *reserved1, const char *reserved2);
int mq_plugin_init_(void);

#endif /*!P_LIBMQ_H_*/
