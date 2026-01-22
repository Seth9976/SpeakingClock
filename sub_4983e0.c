// 函数: sub_4983e0
// 地址: 0x4983e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = *arg2
arg3[1] = arg2[1]
int32_t* edi_1 = *(arg1 + 0x30)

if (sub_403df4(edi_1, 0x46a11c) == 0)
    sub_406550(&var_8)
    esp = &var_8
    
    if (sub_498100(edi_1, 0x4984bc, &var_8) != 0)
        void var_1c
        sub_418a3c(*(arg1 + 0x40), *(arg1 + 0x44), &var_1c)
        var_8->Next->__offset(0x1c).d()
        int32_t var_14
        int32_t var_10
        sub_418a3c(*arg2 + var_14, arg2[1] + var_10, arg3)
else
    sub_406550(&var_8)
    
    if (sub_4981d8(edi_1, &var_8) != 0)
        sub_418a3c(*arg2 + *(arg1 + 0x40), arg2[1] + *(arg1 + 0x44), arg3)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4984b4
int32_t* result = &var_8
sub_406550(result)
return result
