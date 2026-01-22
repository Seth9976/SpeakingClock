// 函数: sub_46f018
// 地址: 0x46f018
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
var_8 = arg1
struct _EXCEPTION_REGISTRATION_RECORD* eax = var_8

if (eax->__offset(0x28c).b != 0)
    return eax

var_8->__offset(0x28c).b = 1
int32_t __saved_ebp
int32_t* var_10 = &__saved_ebp
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (var_8->__offset(0x60).b != 0)
    void* esi_1 = var_8->__offset(0x30).d
    
    if (esi_1 != 0)
        *(esi_1 + 0x5f)
        var_8->Next->__offset(0x74).d()
    else
        *(data_4b1ce0 + 0x34)
        var_8->Next->__offset(0x74).d()
    
    int32_t edx_1
    edx_1.b = 1
    var_8->Next->__offset(0x70).d()
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = 0x46f09f
struct _EXCEPTION_REGISTRATION_RECORD* eax_8 = var_8
eax_8->__offset(0x28c).b = 0
return eax_8
