// 函数: sub_44eefc
// 地址: 0x44eefc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t var_1c = 0
char* var_18 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_c = arg3
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_d = 0
int32_t i_1 = *arg1

if (i_1 != 0)
    i_1 = *(i_1 - 4)

if (i_1 s> 0)
    int32_t esi_1 = 1
    int32_t i
    
    do
        if (test_bit(*data_4ac4c4, zx.d(*(*arg1 + esi_1 - 1))))
            var_d = 1
            break
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if (var_d != 0)
    int32_t esi_2 = *arg1
    
    if (esi_2 != 0)
        esi_2 = *(esi_2 - 4)
    
    sub_405080(3, esi_2 - 2, *arg1, &var_18)
    sub_404fb0(var_18, "...")
    
    if (esi_2 != 2)
        int32_t var_34_4 = *arg1
        void* const var_38_2 = &data_44f060
        void* const var_3c_2 = &data_44f06c
        struct _EXCEPTION_REGISTRATION_RECORD* var_40_2 = var_8
        void* const var_44_2 = &data_44f078
        sub_404f1c(arg1, 5)
        esp = &var_8
    else
        int32_t esi_4 = *arg1
        
        if (esi_4 != 0)
            esi_4 = *(esi_4 - 4)
        
        sub_405080(esi_4 - 3, 1, *arg1, &var_1c)
        int32_t var_34_3 = var_1c
        void* const var_38_1 = &data_44f060
        void* const var_3c_1 = &data_44f06c
        struct _EXCEPTION_REGISTRATION_RECORD* var_40_1 = var_8
        void* const var_44_1 = &data_44f078
        void* const var_48_1 = &data_44f054
        sub_404f1c(arg1, 6)
        esp = &var_c
else if (var_c != 0)
    sub_405108(&data_44f06c, arg1, var_c)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_44f046
return sub_404bac(&var_1c, 2)
