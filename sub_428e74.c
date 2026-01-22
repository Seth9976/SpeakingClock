// 函数: sub_428e74
// 地址: 0x428e74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_44 = ebx
int32_t var_40 = 0
char* var_8 = nullptr
int32_t var_c = 0
int32_t* var_48 = &var_4
int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_404c20(&var_8, arg2)

if (sub_428a0c(var_8) == 0)
    sub_4050c0(&var_8, 1, 1)

int32_t var_1c = *(arg1 + 4)
char** eax_7
void* ebp_1
eax_7, ebp_1 = sub_429280(arg1, arg2)
*(ebp_1 - 0x1c) = eax_7

if (*(ebp_1 - 0x1c) == 0)
    PSTR lpSubKey = sub_405018(*(ebp_1 - 4))
    void* ebx_1
    ebx_1.b = RegDeleteKeyA(sub_428b68(*(ebp_1 - 0xc), *(ebp_1 - 0x11)), lpSubKey) == NO_ERROR
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_48_1)(int32_t* arg1 @ ebp) = sub_428fe5
    sub_404b88(ebp_1 - 0x3c)
    return sub_404bac(ebp_1 - 8, 2)

void* var_54 = ebp_1
int32_t (* var_58)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_428b7c(*(ebp_1 - 0xc), *(ebp_1 - 0x1c))

if (sub_42900c(*(ebp_1 - 0xc), ebp_1 - 0x38) != 0)
    sub_404c78(ebp_1 - 8, nullptr, *(ebp_1 - 0x34) + 1)
    uint32_t dwIndex = *(ebp_1 - 0x38) - 1
    
    if (dwIndex s>= 0)
        do
            *(ebp_1 - 0x10) = *(ebp_1 - 0x34) + 1
            uint8_t* lpName = sub_405018(*(ebp_1 - 8))
            enum WIN32_ERROR eax_17
            int32_t ecx_3
            eax_17, ecx_3 = RegEnumKeyExA(*(ebp_1 - 0x1c), dwIndex, lpName, ebp_1 - 0x10, nullptr, 
                nullptr, nullptr, nullptr)
            
            if (eax_17 == NO_ERROR)
                sub_404d80(ecx_3, sub_405018(*(ebp_1 - 8)))
                *(ebp_1 - 0x3c)
                *(ebp_1 - 0xc)
                sub_428e74()
            
            dwIndex -= 1
        while (dwIndex != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_54_1 = 0x428f9b
sub_428b7c(*(ebp_1 - 0xc), *(ebp_1 - 0x18))
return RegCloseKey(*(ebp_1 - 0x1c))
