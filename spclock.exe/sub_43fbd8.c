// 函数: sub_43fbd8
// 地址: 0x43fbd8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_440 = ebx
int32_t var_43c = 0
int32_t var_438 = 0
int32_t var_434 = 0
int64_t* var_42c = nullptr
int32_t* var_44c = &var_4
int32_t (* var_450)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_10 = 0
int32_t var_14 = 0

if (EnumPrintersA(1, 0, 5, 0, 0, &var_10, &var_14, ExceptionList, var_450, var_44c) == 0
        && GetLastError() != ERROR_INSUFFICIENT_BUFFER)
    if (GetLastError() != ERROR_INVALID_NAME)
        sub_40e584()
    else
        sub_406a30(data_4ac09c, &var_42c)
        sub_43efe8(var_42c)

int32_t* eax_6 = sub_402e90(var_10)
int32_t* var_44c_1 = &var_4
int32_t (* var_450_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_2 =
    EnumPrintersA(1, 0, 5, eax_6, var_10, &var_10, &var_14, ExceptionList, var_450_1, var_44c_1)

if (var_14 u<= 0)
    uint32_t nSize = 0x3ff
    uint8_t var_428[0x408]
    uint8_t* lpReturnedString = &var_428
    ExceptionList = &data_43fe48
    GetProfileStringA(sub_43fe45+0xf, sub_43fe45+7, ExceptionList, lpReturnedString, nSize)
    uint8_t (* var_18)[0x408] = &var_428
    char* eax_12
    eax_12, edx_2 = sub_43efb4(&var_18)
    char* var_1c_1 = eax_12
else
    int32_t var_1c = *eax_6

int32_t eax_14
void* ebp_1
eax_14, ebp_1 = sub_43f998(arg1, edx_2)
*(ebp_1 - 0x20) = eax_14
int32_t eax_17 = (*(**(ebp_1 - 0x20) + 0x14))(arg3, arg2) - 1

if (eax_17 s>= 0)
    *(ebp_1 - 0x24) = eax_17 + 1
    *(ebp_1 - 8) = 0
    int32_t i
    
    do
        *(ebp_1 - 8)
        void* eax_20
        int32_t ecx_2
        eax_20, ecx_2 = (*(**(ebp_1 - 0x20) + 0x18))()
        int32_t edi = *(eax_20 + 8)
        *(ebp_1 - 0x42c) = edi
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = *(ebp_1 - 0x42c)
        
        if (ExceptionList_1 != 0)
            ExceptionList_1 = *(ExceptionList_1 - 4)
        
        int32_t ecx_3 = sub_404d80(ecx_2, *(ebp_1 - 0x18))
        int32_t cchCount2 = *(ebp_1 - 0x430)
        
        if (cchCount2 != 0)
            cchCount2 = *(cchCount2 - 4)
        
        sub_404d80(ecx_3, *(ebp_1 - 0x18))
        char* lpString2 = sub_405018(*(ebp_1 - 0x434))
        ExceptionList = ExceptionList_1
        *(ebp_1 - 0x42c) = edi
        int32_t eax_27
        eax_27.b = CompareStringA(0x400, 1, sub_405018(*(ebp_1 - 0x42c)), ExceptionList, lpString2, 
            cchCount2) == 2
        
        if (eax_27.b != 0)
            *(ebp_1 - 8)
            void* eax_29 = (*(**(ebp_1 - 0x20) + 0x18))()
            int32_t eax_31 = sub_405018(*(eax_29 + 0xc))
            int32_t var_450_3 = 0
            ExceptionList = sub_405018(*(eax_29 + 4))
            int32_t eax_35 = sub_405018(*(eax_29 + 8))
            sub_43f6c0(*(ebp_1 - 4), eax_35, ExceptionList)
            sub_4045c8(var_450_3, eax_31)
            fsbase->NtTib.ExceptionList = arg2
            int32_t (* var_43c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_43fe3e
            sub_404bac(ebp_1 - 0x438, 3)
            sub_404b88(ebp_1 - 0x428)
            return ebp_1 - 0x428
        
        *(ebp_1 - 8) += 1
        i = *(ebp_1 - 0x24)
        *(ebp_1 - 0x24) -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = arg3
int32_t var_440_1 = 0x43fdf3
return sub_402ec4(*(ebp_1 - 0x1c))
