/*****************************************************************************\
 *                        ANALYSIS PERFORMANCE TOOLS                         *
 *                                   Extrae                                  *
 *              Instrumentation package for parallel applications            *
 *****************************************************************************
 *     ___     This library is free software; you can redistribute it and/or *
 *    /  __         modify it under the terms of the GNU LGPL as published   *
 *   /  /  _____    by the Free Software Foundation; either version 2.1      *
 *  /  /  /     \   of the License, or (at your option) any later version.   *
 * (  (  ( B S C )                                                           *
 *  \  \  \_____/   This library is distributed in hope that it will be      *
 *   \  \__         useful but WITHOUT ANY WARRANTY; without even the        *
 *    \___          implied warranty of MERCHANTABILITY or FITNESS FOR A     *
 *                  PARTICULAR PURPOSE. See the GNU LGPL for more details.   *
 *                                                                           *
 * You should have received a copy of the GNU Lesser General Public License  *
 * along with this library; if not, write to the Free Software Foundation,   *
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA          *
 * The GNU LEsser General Public License is contained in the file COPYING.   *
 *                                 ---------                                 *
 *   Barcelona Supercomputing Center - Centro Nacional de Supercomputacion   *
\*****************************************************************************/

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- *\
 | @file: $HeadURL$
 | @last_commit: $Date$
 | @version:     $Revision$
\* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

#ifndef _OPTIONS_H_INCLUDED_
#define _OPTIONS_H_INCLUDED_

#define DEFAULT_PRV_OUTPUT_NAME "EXTRAE_Paraver_trace.prv"
#define DEFAULT_DIM_OUTPUT_NAME "EXTRAE_Dimemas_Trace.dim"

int get_option_merge_dump (void);
void set_option_merge_dump (int b);

int get_option_merge_SincronitzaTasks (void);
void set_option_merge_SincronitzaTasks (int b);

int get_option_merge_SincronitzaTasks_byNode (void);
void set_option_merge_SincronitzaTasks_byNode (int b);

int get_option_merge_UseDiskForComms (void);
void set_option_merge_UseDiskForComms (int b);

int get_option_merge_SkipSendRecvComms (void);
void set_option_merge_SkipSendRecvComms (int b);

int get_option_merge_UniqueCallerID (void);
void set_option_merge_UniqueCallerID (int b);

int get_option_merge_VerboseLevel (void);
void set_option_merge_VerboseLevel (int l);

char * get_merge_OutputTraceName (void);
void set_merge_OutputTraceName (char* s);

char * get_merge_CallbackFileName (void);
void set_merge_CallbackFileName (char* s);

char * get_merge_SymbolFileName (void);
void set_merge_SymbolFileName (char* s);

char * get_merge_ExecutableFileName (void);
void set_merge_ExecutableFileName (char* s);

int get_option_merge_TreeFanOut (void);
void set_option_merge_TreeFanOut (int tfo);

int get_option_merge_MaxMem (void);
void set_option_merge_MaxMem (int mm);

int get_option_merge_ForceFormat (void);
void set_option_merge_ForceFormat (int b);

int get_option_merge_NumApplications (void);
void set_option_merge_NumApplications (int n);

int get_option_merge_JointStates (void);
void set_option_merge_JointStates (int b);

int get_option_merge_ParaverFormat (void);
void set_option_merge_ParaverFormat (int b);

#if defined(IS_BG_MACHINE)
int get_option_merge_BG_XYZT (void);
void set_option_merge_BG_XYZT (int b);
#endif

#endif
