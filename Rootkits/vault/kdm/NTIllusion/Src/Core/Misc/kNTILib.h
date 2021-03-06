/******************************************************************************
  Author		: Kdm (Kodmaker@syshell.org)
  WebSite		: http://www.syshell.org

  Copyright (C) 2003,2004 Kdm
  *****************************************************************************
  This file is part of NtIllusion.

  NtIllusion is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  NtIllusion is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with NtIllusion; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  ******************************************************************************/

#ifndef _KNTILIB_H
#define _KNTILIB_H

void ExtractPaths(HINSTANCE hInstance, char *szExePath, 
	char *szkNTIDllPath, char **pkNTIDllName);
void Output2LogFile(char* frmstr,...);
void Our_OutputDebugString(LPCTSTR);
void OutputString(char* frmstr,...);
int my_strcmp(char *a, char *b);
void my_strtolower(char* str);
int my_strlen(const char *str);
void my_memset(char *dSrc, char dValue, DWORD dCount);

#endif