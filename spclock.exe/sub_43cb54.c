// 函数: sub_43cb54
// 地址: 0x43cb54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t var_18 = 0
RECT var_14
var_14.left = *arg3
var_10
void* edi_1 = &var_10
void* esi_2 = &arg3[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_456094(*(arg1 + 0x250))
var_8

if (*(arg1 + 0x2ca) == 0)
    sub_42c258(*(arg1 + 0x250), &var_14)
    
    if (arg2 s>= 0)
        (*(**(arg1 + 0x284) + 0xc))()
        var_14.right = var_18
        sub_42c48c(var_14.top, var_14.left + 2, *(arg1 + 0x250), var_14.right)
        esp = &var_8
else
    *(arg1 + 0x2cc)
    (*(arg1 + 0x2c8))(zx.d(arg4), &var_14)
    esp = &var_8
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43cc04
int32_t* result = &var_18
sub_404b88(result)
return result
