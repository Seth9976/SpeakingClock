// 函数: sub_426124
// 地址: 0x426124
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
var_8 = arg3
sub_405008(var_8)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((&data_4b1a28)[zx.d(arg1)] == 0)
    int32_t esi_2
    
    if (data_4b1a24 == 0)
        esi_2 = 0
    else
        if (arg1 == 0 && data_4b1a30 == 0)
            data_4b1a10
            uint32_t eax_1
            eax_1.b = 4
            esp_1 = &var_8
            data_4b1a10 = sub_426124()
            
            if (data_4b1a30 == 0)
                sub_404b88(&var_8)
        
        *(esp_1 - 4) = sub_405018(var_8)
        *(esp_1 - 8) = data_4b1a24
        esi_2 = GetProcAddress()
    
    if (esi_2 != 0 && arg1 != 0)
        data_4b1a30 = 1
    
    (&data_4b1a28)[zx.d(arg1)] = 1

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_4261e8
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
