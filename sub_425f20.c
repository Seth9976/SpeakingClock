// 函数: sub_425f20
// 地址: 0x425f20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_1
fsbase->NtTib.ExceptionList = &ExceptionList_1
char var_15 = 0
char var_1d = 0

if (arg3 != 0)
    sub_404bdc(arg1 + 0x20, arg3)

int32_t eax_5 = *(*(arg1 + 0x10) + 8) - 1

if (eax_5 s>= 0)
    int32_t var_24_1 = eax_5 + 1
    sub_406568(&var_8, *(sub_41a0f4(*(arg1 + 0x10), 0) + 4))
    int32_t* var_38_1 = &var_4
    int32_t (* var_3c_1)(void* arg1, void* arg2) = j_sub_40443c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_406550(&var_c)
    
    if (sub_40eb24(var_8, 0x426050, &var_c) != 0)
        var_1d = (*(*var_c + 0x40))()
        (*(*var_c + 0x44))()
    
    if ((*(*var_8 + 0x10))() s<= 0)
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = &data_426013
        
        if (var_c == 0)
            return 0
        
        return (*(*var_c + 0x44))()
    
    char var_15_1 = 1
    sub_4045c8(var_8, var_4)
    void arg_4
    esp = &arg_4

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_426044
sub_406550(&var_c)
int32_t** result = &var_8
sub_406550(result)
return result
