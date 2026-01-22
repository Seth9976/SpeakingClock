// 函数: sub_4a5b44
// 地址: 0x4a5b44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* hModule_1
__builtin_memset(&hModule_1, 0, 0x18)
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_4abf7c != 0)
    FreeLibrary(data_4abf7c)

data_4b1e24
(*(*data_4b1e18 + 0xc))("voice\", data_4b1df8)
int32_t var_c
int32_t var_c_1 = var_c
void* const hModule = ".dll"
int32_t var_8
sub_404f1c(&var_8, 4)
data_4abf7c = LoadLibraryA(sub_405018(var_8))

if (data_4abf7c != 0)
    sub_4a5d70(arg1)
    PSTR lpProcName = "Speak"
    hModule = data_4abf7c
    int32_t eax_12 = GetProcAddress(hModule, lpProcName)
    *(arg1 + 0x504) = eax_12
    
    if (eax_12 == 0)
        sub_4a5d34(arg1)
        int32_t var_c_4 = 0
        hModule = "Error in "
        data_4b1e24
        (*(*data_4b1e18 + 0xc))(hModule)
        hModule = hModule_1
        void* const var_14_1 = ".DLL - time announcements will not be available."
        int32_t var_18
        sub_404f1c(&var_18, 3)
        int32_t edx_4
        edx_4.b = 1
        sub_448ae4(4, var_c_4)
else
    sub_4a5d34(arg1)
    int32_t var_c_3 = 0
    hModule = "Could not load "
    data_4b1e24
    (*(*data_4b1e18 + 0xc))(hModule)
    void* hModule_2
    hModule = hModule_2
    void* const var_14 = ".DLL - time announcements will not be available."
    sub_404f1c(&hModule, 3)
    int32_t edx_2
    edx_2.b = 1
    sub_448ae4(4, var_c_3)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a5c99
return sub_404bac(&hModule_1, 6)
