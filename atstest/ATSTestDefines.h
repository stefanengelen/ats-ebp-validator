/*
Copyright (c) 2015, Cable Television Laboratories, Inc.(“CableLabs”)
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of CableLabs nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL CABLELABS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef __H_ATS_TEST_DEFINES_54KJQEWQ
#define __H_ATS_TEST_DEFINES_54KJQEWQ


extern int ATS_TEST_CASE_AUDIO_PTS_GAP;
extern int ATS_TEST_CASE_AUDIO_PTS_OVERLAP;
extern int ATS_TEST_CASE_VIDEO_PTS_GAP;
extern int ATS_TEST_CASE_VIDEO_PTS_OVERLAP;
extern int ATS_TEST_CASE_AUDIO_PTS_OFFSET;
extern int ATS_TEST_CASE_VIDEO_PTS_OFFSET;
extern int ATS_TEST_CASE_AUDIO_PTS_BIG_LAG;

extern int ATS_TEST_CASE_AUDIO_IMPLICIT_TRIGGER;
extern int ATS_TEST_CASE_AUDIO_XFILE_IMPLICIT_TRIGGER;
extern int ATS_TEST_CASE_NO_EBP_DESCRIPTOR;

extern int ATS_TEST_CASE_AUDIO_UNIQUE_LANG;

extern int ATS_TEST_CASE_SAP_TYPE_MISMATCH_AND_TOO_LARGE;
extern int ATS_TEST_CASE_SAP_TYPE_NOT_1_OR_2;

extern int ATS_TEST_CASE_ACQUISITION_TIME_NOT_PRESENT;
extern int ATS_TEST_CASE_ACQUISITION_TIME_MISMATCH;


int setTestCase (char * testCaseName);


#endif  // __H_ATS_TEST_DEFINES_54KJQEWQ
