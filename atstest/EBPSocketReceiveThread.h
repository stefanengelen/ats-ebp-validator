/*
** Copyright (C) 2014  Cable Television Laboratories, Inc.
** Contact: http://www.cablelabs.com/
 

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 */

#ifndef __H_EBP_SOCKET_RECEIVE_THREAD
#define __H_EBP_SOCKET_RECEIVE_THREAD

#include "EBPStreamBuffer.h"

typedef struct 
{
    circular_buffer_t *cb;
    unsigned long ipAddr;
    unsigned long srcipAddr;
    unsigned short port;

    int threadNum;
    int enableStreamDump;

    int stopFlag;
    unsigned int receivedBytes;

} ebp_socket_receive_thread_params_t;


void *EBPSocketReceiveThreadProc(void *threadParams);

#endif  // __H_EBP_SOCKET_RECEIVE_THREAD
