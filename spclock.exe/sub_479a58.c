// 函数: sub_479a58
// 地址: 0x479a58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_2 = arg1 & 0x7f

if (*((esi_2 << 2) + &data_4b1d18) == 0)
    int32_t edx
    edx.b = 1
    int32_t* eax
    int32_t ecx_1
    eax, ecx_1 = sub_430618(sub_42a104+0x140, edx)
    *((esi_2 << 2) + &data_4b1d18) = eax
    sub_404d80(ecx_1, *((esi_2 << 2) + &data_4abb60))
    ebp_1, esi_2 = sub_4311dc(*((zx.d(arg1.b) << 2) + &data_4b1d18), data_4af7f4, var_8)
    esp = &var_8

*((esi_2 << 2) + &data_4b1d18)
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_479adc
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
