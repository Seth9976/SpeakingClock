// 函数: sub_40b160
// 地址: 0x40b160
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_1c = ebx
int32_t var_18 = 0
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
enum WIN32_ERROR eax
int32_t edx
eax, edx = GetLastError()
enum WIN32_ERROR ebx_1 = eax
char var_8
int32_t* edx_3

if (ebx_1 == NO_ERROR)
    edx.b = 1
    edx_3 = sub_409fa4(sub_40660c+0x48, edx, data_41355c)
else
    enum WIN32_ERROR var_14 = ebx_1
    char var_10_1 = 0
    sub_4096e0(ebx_1, &var_18)
    int32_t var_c_1 = var_18
    var_8 = 0xb
    int32_t edx_2
    edx_2.b = 1
    int32_t* eax_3
    eax_3, ebx_1, ebp_1 = sub_409fe0(sub_40660c+0x48, edx_2, data_4134f8, 1, &var_14)
    edx_3 = eax_3

edx_3[3] = ebx_1
sub_4033c4(edx_3)
fsbase->NtTib.ExceptionList = var_8.d
__return_addr = sub_40b1f7
sub_4039ec(&ebp_1[-5])
return &ebp_1[-5]
