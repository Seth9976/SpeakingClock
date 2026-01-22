// 函数: sub_467f7c
// 地址: 0x467f7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t ecx = arg2
arg2.b = 1
int32_t* pstm_1 = sub_423e50(ecx, arg2, &data_418274, 0)
int32_t* var_24_1 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* pstm = pstm_1

if (pstm != 0)
    pstm -= 0xffffffec

sub_466c70(arg1, ImageList_Read(pstm))
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_24_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_467fe3
return sub_403c68(pstm_1)
