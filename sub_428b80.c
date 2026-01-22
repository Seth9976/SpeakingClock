// 函数: sub_428b80
// 地址: 0x428b80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
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
bool var_a
struct _EXCEPTION_REGISTRATION_RECORD** esp

if (arg3 == 0 || var_8 == 0)
    enum REG_SAM_FLAGS samDesired = *(arg1 + 0x18)
    PSTR lpSubKey = sub_405018(var_8)
    esp = &ExceptionList
    var_a = RegOpenKeyExA(sub_428b68(arg1, eax_2), lpSubKey, 0, samDesired, &phkResult) == NO_ERROR
else
    enum REG_SAM_FLAGS samDesired_1 = *(arg1 + 0x18)
    PSTR lpSubKey_1 = sub_405018(var_8)
    esp = &ExceptionList
    enum REG_CREATE_KEY_DISPOSITION lpdwDisposition
    var_a = RegCreateKeyExA(sub_428b68(arg1, eax_2), lpSubKey_1, 0, nullptr, REG_OPTION_RESERVED, 
        samDesired_1, nullptr, &phkResult, &lpdwDisposition) == NO_ERROR

if (var_a != 0)
    enum WIN32_ERROR eax_7
    eax_7.b = *(arg1 + 4) != 0
    
    if ((eax_7.b & eax_2) != 0)
        int32_t var_2c_2 = *(arg1 + 0x10)
        void* const var_30_2 = &data_428ca0
        char* var_34_1 = var_8
        sub_404f1c(&var_8, 3)
        esp = &var_8
    
    sub_428b44(arg1, phkResult, var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_428c8c
char** result = &var_8
sub_404b88(result)
return result
