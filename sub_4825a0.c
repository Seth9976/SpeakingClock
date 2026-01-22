// 函数: sub_4825a0
// 地址: 0x4825a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_8 = arg3
var_8 = arg1

if (arg2 != 0)
    int32_t eax = arg2[0x95]
    
    if (eax != var_8)
        return eax

var_8[0xb0].b = 1
int32_t __saved_ebp
int32_t* var_10 = &__saved_ebp
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_482050(var_8, arg2)

if (arg2 == 0)
    (*(*var_8 + 0xe4))()
    esp = &var_8
else if (arg2 == var_8[0xad])
    sub_4819e8(arg2)
    (*(*var_8 + 0xe4))()
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = &data_48262d
int32_t* eax_8 = var_8
eax_8[0xb0].b = 0
return eax_8
