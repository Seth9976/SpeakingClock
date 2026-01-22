// 函数: sub_44fe40
// 地址: 0x44fe40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_44fc50() != 0)
    return 0

int16_t var_a = sub_44fc8c(arg2)
int32_t var_18 = *(arg1 + 0x34)
sub_424d2c(data_4b1c34, &var_18)
int32_t __saved_ebp
int32_t* var_24 = &__saved_ebp
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
char i

do
    i = 0
    int32_t ecx
    ecx.b = 2
    sub_44f914(arg1)
    int32_t var_8 = 0
    
    if (var_8 != 0)
        void* ecx_1 = sub_424d2c(data_4b1c34, &var_8)
        int32_t* var_30 = &__saved_ebp
        int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t* var_3c = &__saved_ebp
        char var_11_1 = sub_44fcec(&var_8, 0, ecx_1)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_30_1 = 0x44feef
        return sub_424d24(data_4b1c34)
    
    if (var_18 == 0)
        break
while (i == 2)
fsbase->NtTib.ExceptionList = ExceptionList_1
int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_44ff1a
return sub_424d24(data_4b1c34)
