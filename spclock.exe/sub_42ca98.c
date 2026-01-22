// 函数: sub_42ca98
// 地址: 0x42ca98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_10c = ebx
int64_t* var_108 = nullptr
int32_t* var_110 = &var_4
int32_t (* var_114)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
enum WIN32_ERROR dwMessageId = GetLastError()
int64_t buffer[0x1f]
uint32_t eax

if (dwMessageId != NO_ERROR)
    eax = FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, nullptr, dwMessageId, 0x400, &buffer, 0x100, 
        nullptr)
    esp = &ExceptionList

if (dwMessageId == NO_ERROR || eax == 0)
    ebp_1 = sub_42ca44()
else
    sub_404df8(&var_108, &buffer, 0x100)
    int32_t edx_2
    edx_2.b = 1
    sub_40451c(sub_40ceb0(sub_4175f8+0x48, edx_2, var_108))
    void var_8
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_42cb3b
sub_404b88(&ebp_1[-0x41])
return &ebp_1[-0x41]
