// 函数: sub_467338
// 地址: 0x467338
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= sub_4670ec(arg1))
    sub_406a30(data_4ac0f4, &var_8)
    int32_t edx_1
    edx_1.b = 1
    sub_40451c(sub_40ceb0(sub_417654+0x48, edx_1, var_8))

if (sub_466ad8(arg1) != 0)
    ImageList_Remove(sub_466cac(arg1), arg2)

int32_t esi_1
esi_1.w = 0xffef
sub_403e64(arg1, esi_1)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4673be
int64_t** result = &var_8
sub_404b88(result)
return result
