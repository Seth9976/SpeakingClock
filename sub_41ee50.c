// 函数: sub_41ee50
// 地址: 0x41ee50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int64_t* var_c = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t* var_38 = &var_4
int32_t (* var_3c)() = j_sub_4042b4
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_41f9d8(arg1, &var_c, 0)
int32_t* var_44 = &var_4
int32_t (* var_48)() = j_sub_4042b4
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 1
int64_t* eax_1 = var_c

if (eax_1 != 0)
    eax_1 = *(eax_1 - 4)

int32_t* var_18 = var_8
arg1[0x22].b = 1

while (true)
    int32_t i_1 = i
    
    for (; eax_1 s>= i; i += 1)
        if (*(var_c + i - 1) == 0x2e)
            break
    
    sub_405080(i - i_1, i_1, var_c, &arg1[0x20])
    struct _EXCEPTION_REGISTRATION_RECORD** esp
    
    if (eax_1 s< i)
        int32_t* eax_31 = sub_4161f8(sub_403ea8(*var_18), arg1[0x20])
        
        if (eax_31 == 0)
            arg1[0x22].b = 0
            int32_t ecx_9 = (*(*var_18 + 4))()
            arg1[0x22].b = 1
            
            if (arg1[0x20] != 0)
                sub_41e038(ecx_9, arg1[0x20])
        else
            sub_41f24c(arg1, var_18, eax_31)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        esp = &ExceptionList_2
        fsbase->NtTib.ExceptionList = ExceptionList_1
    label_41f086:
        esp[2]
        fsbase->NtTib.ExceptionList = *esp
        esp[2] = sub_41f09f
        void** result = &var_c
        sub_404b88(result)
        return result
    
    int32_t* eax_12 = sub_4161f8(sub_403ea8(*var_18), arg1[0x20])
    
    if (eax_12 == 0)
        sub_404bdc(&arg1[0x20], var_c)
        arg1[0x22].b = 0
        int32_t ecx_4 = (*(*var_18 + 4))()
        arg1[0x22].b = 1
        
        if (arg1[0x20] != 0)
            sub_41e038(ecx_4, arg1[0x20])
        
        int32_t entry_ebx
        fsbase->NtTib.ExceptionList = entry_ebx
        esp = &var_8
        fsbase->NtTib.ExceptionList = i_1
        goto label_41f086
    
    int32_t var_1c_1 = 0
    
    if (***eax_12 == 7)
        var_1c_1 = sub_4162ec(var_18, eax_12)
    
    if (sub_403df4(var_1c_1, &data_41780c) == 0)
        sub_41ee34(&var_4)
    
    var_18 = var_1c_1
    i += 1
