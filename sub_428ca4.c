// 函数: sub_428ca4
// 地址: 0x428ca4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
char* var_8 = nullptr
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404c20(&var_8, arg2)
char eax_2 = sub_428a0c(var_8)

if (eax_2 == 0)
    sub_4050c0(&var_8, 1, 1)

HKEY phkResult = nullptr
int32_t edi_2 = *(arg1 + 0x18) & 0x300
PSTR lpSubKey = sub_405018(var_8)
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList

if (RegOpenKeyExA(sub_428b68(arg1, eax_2), lpSubKey, 0, edi_2 | 0x20019, &phkResult) != NO_ERROR)
    PSTR lpSubKey_1 = sub_405018(var_8)
    esp = &ExceptionList
    
    if (RegOpenKeyExA(sub_428b68(arg1, eax_2), lpSubKey_1, 0, edi_2 | 0x20009, &phkResult)
            != NO_ERROR)
        PSTR lpSubKey_2 = sub_405018(var_8)
        esp = &ExceptionList
        
        if (RegOpenKeyExA(sub_428b68(arg1, eax_2), lpSubKey_2, 0, edi_2 | 1, &phkResult)
                == NO_ERROR)
            *(arg1 + 0x18) = edi_2 | 1
            enum WIN32_ERROR eax_25
            eax_25.b = *(arg1 + 4) != 0
            
            if ((eax_25.b & eax_2) != 0)
                int32_t var_2c_5 = *(arg1 + 0x10)
                void* const var_30_5 = &data_428e70
                char* var_34_3 = var_8
                sub_404f1c(&var_8, 3)
                esp = &var_8
            
            sub_428b44(arg1, phkResult, var_8)
    else
        *(arg1 + 0x18) = edi_2 | 0x20009
        enum WIN32_ERROR eax_17
        eax_17.b = *(arg1 + 4) != 0
        
        if ((eax_17.b & eax_2) != 0)
            int32_t var_2c_3 = *(arg1 + 0x10)
            void* const var_30_3 = &data_428e70
            char* var_34_2 = var_8
            sub_404f1c(&var_8, 3)
            esp = &var_8
        
        sub_428b44(arg1, phkResult, var_8)
else
    *(arg1 + 0x18) = edi_2 | 0x20019
    enum WIN32_ERROR eax_9
    eax_9.b = *(arg1 + 4) != 0
    
    if ((eax_9.b & eax_2) != 0)
        int32_t var_2c_1 = *(arg1 + 0x10)
        void* const var_30_1 = &data_428e70
        char* var_34_1 = var_8
        sub_404f1c(&var_8, 3)
        esp = &var_8
    
    sub_428b44(arg1, phkResult, var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_428e5c
char** result = &var_8
sub_404b88(result)
return result
