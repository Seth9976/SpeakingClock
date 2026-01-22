// 函数: sub_47c0c4
// 地址: 0x47c0c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t ebx
uint32_t var_58 = ebx
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
int32_t var_54 = 0
int32_t var_48 = 0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42c7c4(arg1[0x98], *(arg2 + 0x18))
(*(*arg1 + 0x44))(ExceptionList, j_sub_40443c, &var_4)
sub_42c7c4(arg1[0x98], *(arg2 + 0x18))
arg1[0x1a]
sub_42c630(arg1[0x98])
char eax_4 = (*(arg2 + 0x10)).b
ebx.b = (eax_4 & 1) != 0
bool var_5 = (eax_4 & 0x10) != 0
char var_6

if ((*(*arg1 + 0x50))() == 0)
    var_6 = 1
else if (ebx.b == 0)
    var_6 = 0
else
    var_6 = 2

void var_44
int32_t var_28
int32_t var_25
int32_t var_21
int32_t var_1d
int32_t var_19

if (sub_46665c(arg1) == 0)
    (*(*arg1 + 0x44))()
    int32_t dy = 0x2010
    
    if (ebx.b != 0)
        dy = 0x2210
    
    if ((*(arg2 + 0x10) & 4) != 0)
        dy |= 0x100
    
    if ((arg1[0x9d].b | var_5) != 0)
        sub_42b8b8(*(arg1[0x98] + 0x10), 0xff000006)
        sub_42b9d4(*(arg1[0x98] + 0x10), 1)
        sub_42bcec(*(arg1[0x98] + 0x14), 1)
        sub_42c3d4(var_21, var_25, arg1[0x98], var_19, var_1d)
        dy = 0xffffffff
        InflateRect(&var_28:3, 0xffffffff, dy)
    
    if (ebx.b == 0)
        int32_t dy_1 = dy
        int32_t var_10_12 = 4
        void* var_14_8 = &var_28:3
        var_19 = *(arg2 + 0x18)
        DrawFrameControl()
    else
        sub_42b8b8(*(arg1[0x98] + 0x10), 0xff000010)
        sub_42b9d4(*(arg1[0x98] + 0x10), 1)
        sub_42bbb0(*(arg1[0x98] + 0x14), 0xff00000f)
        sub_42c3d4(var_21, var_25, arg1[0x98], var_19, var_1d)
        InflateRect(&var_28:3, 0xffffffff, 0xffffffff)
    
    if (arg1[0x9d].b != 0)
        (*(*arg1 + 0x44))()
        InflateRect(&var_28:3, 0xffffffff, 0xffffffff)
    
    arg1[0x1a]
    sub_42c630(arg1[0x98])
    
    if (ebx.b != 0)
        OffsetRect(&var_28:3, 1, 1)
    
    void var_50
    void* ecx_12 = &var_50
    sub_418a3c(0, 0, ecx_12)
    void* var_c_13 = &var_50
    sub_4577d8(ecx_12, &var_54)
    int32_t var_10_15 = var_54
    uint32_t var_14_11 = zx.d(*(arg1 + 0x26a))
    var_19 = arg1[0x9c]
    var_1d = arg1[0x9b]
    var_21 = zx.d(var_6)
    var_25 = 0
    var_28 = sub_45a198(arg1, 0) | *((zx.d(*(arg1 + 0x251)) << 2) + &data_4abc00)
    sub_47ae24(&var_28:3, arg1[0x98], arg1[0x99], arg1, &var_44, var_28)
    
    if ((arg1[0x9d].b & var_5) != 0)
        (*(*arg1 + 0x44))()
        InflateRect(&var_28:3, 0xfffffffc, 0xfffffffc)
        sub_42b8b8(*(arg1[0x98] + 0x10), 0xff000006)
        sub_42bbb0(*(arg1[0x98] + 0x14), 0xff00000f)
        DrawFocusRect(sub_42c73c(arg1[0x98]), &var_28:3)
else
    char var_d_1
    
    if ((*(*arg1 + 0x50))() == 0)
        var_d_1 = 5
    else if (ebx.b != 0)
        var_d_1 = 4
    else if (*(arg1 + 0x276) != 0)
        var_d_1 = 3
    else if ((arg1[0x9d].b | var_5) == 0)
        var_d_1 = 2
    else
        var_d_1 = 6
    
    sub_4659bc()
    void var_34
    sub_465d2c(&var_34, zx.d(var_d_1))
    void* eax_12
    int32_t ecx_2
    int32_t edx_6
    eax_12, ecx_2, edx_6 = sub_4659bc()
    char eax_13 = sub_465ac4(eax_12)
    char eax_14
    
    if (eax_13 != 0)
        eax_14, edx_6 = sub_433cec(ecx_2)
    
    if (eax_13 == 0 || eax_14 == 0 || (arg1[7].b & 0x10) != 0)
        ebx = 0
    else
        ebx.b = 1
    
    if (ebx.b != 0)
        edx_6.b = 1
        int32_t* eax_16 = sub_46bf14(arg1)
        uint32_t eax_22
        
        if (eax_16 == 0)
            eax_22 = 0
        else if (sub_478924(sub_478638(eax_16)) == 0)
            eax_22 = 0
        else if (sub_47895c(sub_478638(eax_16), arg1).b != 0)
            eax_22.b = 1
        else
            eax_22 = 0
        
        ebx = eax_22
    
    if (ebx.b != 0)
        InflateRect(&var_28:3, 0xfffffffe, 0xfffffffe)
        HGDIOBJ hbr = GetStockObject(BLACK_BRUSH)
        FillRect(*(arg2 + 0x18), &var_28:3, hbr)
    else
        void* var_c = &var_34
        char var_10_1 = 1
        int32_t var_14_1 = 0
        int32_t eax_24 = sub_45f888(arg1)
        void* eax_25 = sub_4659bc()
        sub_465c5c(*(arg2 + 0x18), eax_24, eax_25, var_14_1, var_10_1, var_c)
    
    int32_t var_10_4 = 0
    void* eax_28 = sub_4659bc()
    sub_465bd0(&var_34, *(arg2 + 0x18), eax_28, var_10_4, arg2 + 0x1c)
    sub_465b34(&var_34, sub_42c73c(arg1[0x98]), sub_4659bc(), &var_28:3, arg2 + 0x1c)
    void var_15
    void* ecx_6
    
    if (var_d_1 != 4)
        ecx_6 = &var_15
        sub_418a3c(0, 0, ecx_6)
    else
        ecx_6 = &var_15
        sub_418a3c(1, 0, ecx_6)
    
    if (ebx.b != 0)
        var_6 |= 4
    
    void* var_c_6 = &var_15
    sub_4577d8(ecx_6, &var_48)
    int32_t var_10_6 = var_48
    uint32_t var_14_5 = zx.d(*(arg1 + 0x26a))
    var_19 = arg1[0x9c]
    var_1d = arg1[0x9b]
    var_21 = zx.d(var_6)
    var_25 = 0
    var_28 = sub_45a198(arg1, 0) | *((zx.d(*(arg1 + 0x251)) << 2) + &data_4abc00)
    sub_47ae24(&var_28:3, arg1[0x98], arg1[0x99], arg1, &var_44, var_28)
    
    if ((arg1[0x9d].b & var_5) != 0)
        sub_42b8b8(*(arg1[0x98] + 0x10), 0xff000006)
        sub_42bbb0(*(arg1[0x98] + 0x14), 0xff00000f)
        DrawFocusRect(sub_42c73c(arg1[0x98]), &var_28:3)
sub_42c7c4(arg1[0x98], 0)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_47c5a3
sub_404b88(&var_54)
int32_t* result = &var_48
sub_404b88(result)
return result
