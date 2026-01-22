// 函数: sub_40d4d0
// 地址: 0x40d4d0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
uint8_t* var_8 = nullptr
void* var_c = nullptr
uint8_t* var_10 = nullptr
void* var_14 = nullptr
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403ffc(arg2)
int32_t ecx_1 =
    sub_40cde8((*data_413518)(arg1, 0x400, 0, arg2, ExceptionList, var_24, var_20), 0xb, 8)
char eax_4 = data_413324

if (eax_4 u>= 1)
    if (eax_4 == 1)
        sub_403c74(ecx_1, *arg2)
        sub_404148(sub_406918(var_c, &var_8), var_8)
    else if (eax_4 == 2)
        sub_403c74(ecx_1, *arg2)
        sub_404148(sub_4068dc(var_14, &var_10), var_10)
    else
        ebp_1 = sub_40ca44()

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40d58d
return sub_403a10(&ebp_1[-4], 4)
