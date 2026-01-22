// 函数: sub_494bac
// 地址: 0x494bac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = *arg1
void var_18
void* edi = &var_18
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t* var_c = arg2
char var_1d = 1
int32_t* var_24 = nullptr
char eax_1 = *(arg3 + 0x20)
int32_t* ExceptionList
void var_44

if (eax_1 == 1)
    int32_t* var_64_2 = &var_4
    int32_t (* var_68_2)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_15
    int32_t edx_6
    eax_15, edx_6 = (*(**(arg3 + 0x18) + 0x1c))(ExceptionList, var_68_2, var_64_2)
    
    if (eax_15 == 0)
        if (*data_4ac29c == 0)
            edx_6.b = 1
            var_24 = sub_430618(sub_42a104+0x140, edx_6)
            (*(*var_24 + 0x40))(arg3)
            (*(*var_24 + 0x34))()
            sub_418a64(8, 0, 0, &var_44, 8)
            var_c = &var_44
            void var_54
            sub_418a64(8, 0, 0, &var_54, 8)
            sub_42c124(sub_430bec(*(arg3 + 0x18)), &var_54, sub_430bec(var_24), var_c)
            var_c[5]
            sub_42bb84()
        else
            *(arg3 + 0x18)
            var_c[5]
            sub_42bb84()
    
    sub_42c258(var_c, &var_1c)
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = &data_494eb1
    
    if (var_24 != 0)
        sub_403c68(var_24)
    
    var_c[5]
    return sub_42bb84()

if (eax_1 == 2)
    *(arg3 + 0x34)
    sub_42c64c(var_c)
    sub_42b8b8(var_c[4], arg4)
    
    if (sub_42bce4(var_c[5]) != 0)
        COLORREF color = sub_42ad8c(arg4)
        SetBkColor(sub_42c73c(var_c), color)
    
    sub_42c258(var_c, &var_1c)
else if (eax_1 - 3 u< 2)
    int32_t* var_24_1
    
    if (eax_1 != 3)
        var_24_1 = *(arg3 + 0x24)
    else
        var_24_1 = *(arg3 + 0x18)
    
    if ((*(*var_24_1 + 0x1c))() == 0)
        int32_t esi_5 = 0
        
        if ((*(arg3 + 0x38) & 2) == 0)
            esi_5.w = 0x1000
        
        char eax_43 = *(arg3 + 0x21)
        
        if (eax_43 u< 1)
            sub_494b64(&var_4)
            void var_34
            int32_t eax_47 = (*(*var_24_1 + 0x20))(&var_34)
            ExceptionList = &var_44
            sub_418a64((*(*var_24_1 + 0x2c))(ExceptionList, eax_47), 0, 0)
            sub_48f288(&var_1c, &var_44, *(arg3 + 0x28))
            int32_t dy = *(arg3 + 0x30)
            int32_t dx = *(arg3 + 0x2c)
            ExceptionList = &var_34
            OffsetRect(ExceptionList, dx, dy)
            int32_t var_64_9 = esi_5
            int32_t var_68_7 = 0
            ExceptionList = &var_44
            sub_48e574(var_24_1, var_c, ExceptionList, var_68_7)
        else if (eax_43 == 1)
            sub_494b64(&var_4)
            esi_5.w |= 8
            int32_t var_64_11 = esi_5
            int32_t var_68_8 = 0
            ExceptionList = &var_44
            sub_48e574(var_24_1, var_c, ExceptionList, var_68_8)
        else if (eax_43 == 2)
            esi_5.w |= 0x10
            int32_t var_64_4 = esi_5
            int32_t var_68_3 = 0
            ExceptionList = &var_44
            sub_48e574(var_24_1, var_c, ExceptionList, var_68_3)
        else if (eax_43 == 3)
            esi_5.w |= 0x20
            int32_t var_64_5 = esi_5
            int32_t var_68_4 = 0
            ExceptionList = &var_44
            sub_48e574(var_24_1, var_c, ExceptionList, var_68_4)
    else
        sub_494b64(&var_4)
        var_1d = 0
else if (eax_1 == 5)
    void* ebx_1 = *(arg3 + 0x1c)
    int32_t* ExceptionList_1 = nullptr
    
    if ((*(arg3 + 0x38) & 4) != 0)
        ExceptionList_1.w = 4
    
    if (*(ebx_1 + 0x28) != 0)
        ExceptionList_1.w |= 0x1000
    
    int32_t var_64_12 = *(ebx_1 + 0x20)
    int32_t var_68_9 = sub_48cd68(ebx_1)
    ExceptionList = ExceptionList_1
    sub_48e9f8(*(ebx_1 + 0x30), &var_1c, 0, ExceptionList)
else
    var_1d = 0

return zx.d(var_1d)
