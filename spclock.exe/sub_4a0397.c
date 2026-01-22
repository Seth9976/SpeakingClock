// 函数: sub_4a0397
// 地址: 0x4a0397
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 * 2) += 1
*arg1 += arg1.b
int32_t var_4 = 0x6d74
*arg1 += arg1.b
struct _EXCEPTION_REGISTRATION_RECORD* ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = ebp
int32_t* ebp_1 = &var_8
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0
int32_t* var_20 = &var_8
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_1
ebx_1.b = 1

if (data_4b1dbc != 0)
    int32_t edi_2
    ebp_1, edi_2 = sub_4a0730(arg1, arg3, &var_10)
    esp = &var_8
    ebp_1[-2]
    (*(*data_4b1dbc + 0x14))()

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4a040d
sub_404b88(&ebp_1[-2])
return &ebp_1[-2]
