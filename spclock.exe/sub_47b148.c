// 函数: sub_47b148
// 地址: 0x47b148
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edi
int32_t var_50 = edi
int32_t var_44 = 0
int32_t var_40 = 0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((*(*arg1 + 0x50))(ExceptionList, j_sub_40443c, &var_4) == 0)
    *(arg1 + 0x1b2) = 1
    *(arg1 + 0x1a1) = 0
else if (*(arg1 + 0x1b2) == 1)
    if (arg1[0x68].b == 0 || arg1[0x66] == 0)
        *(arg1 + 0x1b2) = 0
    else
        *(arg1 + 0x1b2) = 3

arg1[0x1a]
sub_42c630(arg1[0x64])
int32_t var_8
RECT lprc
int32_t* var_2c
uint32_t var_24
uint32_t var_20
int32_t var_1c
int32_t* var_c

if (sub_46665c(arg1) == 0)
    var_c = arg1[0x13]
    sub_418a64(arg1[0x12], 0, 0, &var_20:2, var_c)
    int32_t ecx_13
    
    if (arg1[0x6c].b != 0)
        if (*(arg1 + 0x1b2) - 2 u< 2)
        label_47b503:
            var_c = *((zx.d(arg1[0x6a].b) << 2) + &data_4abbf4) | 0xf
            uint32_t eax_63
            eax_63.b = *(arg1 + 0x1b2) - 2
            char temp2_1 = eax_63.b
            eax_63.b -= 2
            eax_63.b = temp2_1 u< 2
            DrawEdge(sub_42c73c(arg1[0x64]), &var_20:2, *(((eax_63 & 0x7f) << 2) + &data_4abbec), 
                var_c)
        else
            if (*(arg1 + 0x1b1) == 0)
                if ((arg1[7].b & 0x10) != 0)
                    goto label_47b503
            else if (*(arg1 + 0x1b2) != 1 || (arg1[7].b & 0x10) != 0)
                goto label_47b503
            
            if (arg1[0x6a].b == 0)
                sub_42bbb0(*(arg1[0x64] + 0x14), arg1[0x1c])
                sub_42c258(arg1[0x64], &var_20:2)
        
        var_c = 0xffffffff
        ecx_13 = InflateRect(&var_20:2, 0xffffffff, var_c)
    else
        int32_t* ebx_2 = 0x2010
        
        if (*(arg1 + 0x1b2) - 2 u< 2)
            ebx_2 = 0x2210
        
        var_c = ebx_2
        ecx_13 = DrawFrameControl(sub_42c73c(arg1[0x64]), &var_20:2, DFC_BUTTON, var_c)
    
    if (*(arg1 + 0x1b2) - 2 u>= 2)
        var_c = nullptr
        var_8 = 0
    else
        if (*(arg1 + 0x1b2) == 3 && (arg1[0x6c].b == 0 || *(arg1 + 0x1b1) == 0))
            sub_432d8c(0xff00000f, 0xff000014)
            *(arg1[0x64] + 0x14)
            sub_42bb84()
            ecx_13 = sub_42c258(arg1[0x64], &var_20:2)
        
        var_c = 1
        var_8 = 1
    
    var_c = &var_c
    sub_4577d8(ecx_13, &var_44)
    int32_t eax_77 = var_44
    char eax_78 = *(arg1 + 0x1a3)
    int32_t eax_79 = arg1[0x6b]
    var_1c = arg1[0x69]
    var_20 = zx.d(*(arg1 + 0x1b2))
    var_24 = zx.d(arg1[0x6a].b)
    int32_t eax_84 = sub_45a198(arg1, 0)
    var_2c = &lprc
    sub_47ae24(&var_20:2, arg1[0x64], arg1[0x67], edi, var_2c, eax_84, var_24.b, var_20.b, var_1c, 
        eax_79, eax_78, eax_77, var_c)
else
    void* eax_5
    int32_t ecx
    int32_t edx_2
    eax_5, ecx, edx_2 = sub_4659bc()
    char eax_6 = sub_465ac4(eax_5)
    char eax_7
    
    if (eax_6 != 0)
        eax_7, edx_2 = sub_433cec(ecx)
    
    uint32_t ebx
    
    if (eax_6 == 0 || eax_7 == 0 || (arg1[7].b & 0x10) != 0)
        ebx = 0
    else
        ebx.b = 1
    
    if (ebx.b != 0)
        edx_2.b = 1
        int32_t* eax_9 = sub_46bf14(arg1)
        uint32_t eax_15
        
        if (eax_9 == 0)
            eax_15 = 0
        else if (sub_478924(sub_478638(eax_9)) == 0)
            eax_15 = 0
        else if (sub_47895c(sub_478638(eax_9), arg1).b != 0)
            eax_15.b = 1
        else
            eax_15 = 0
        
        ebx = eax_15
    
    if (ebx.b != 0)
        var_c = 4
        var_c = GetStockObject(var_c)
        (*(*arg1 + 0x44))(var_c)
        FillRect(sub_42c73c(arg1[0x64]), &lprc)
    else if (arg1[0x6a].b == 0)
        sub_454528(arg1, sub_42c73c(arg1[0x64]))
    else
        var_c = nullptr
        sub_465c5c(sub_42c73c(arg1[0x64]), 0, sub_4659bc(), 0, nullptr.b, var_c)
    
    RECT* var_10
    
    if ((*(*arg1 + 0x50))() == 0)
        var_10:3.b = 5
    else if (*(arg1 + 0x1b2) - 2 u< 2)
        var_10:3.b = 4
    else if (*(arg1 + 0x1b1) == 0)
        var_10:3.b = 2
    else
        var_10:3.b = 3
    
    var_10:2.b = 0
    
    if (arg1[0x6c].b != 0)
        char eax_29 = var_10:3.b
        
        if (eax_29 == 2)
            var_10:2.b = 2
        else if (eax_29 == 3)
            var_10:2.b = 3
        else if (eax_29 == 4)
            var_10:2.b = 4
        else if (eax_29 == 5)
            var_10:2.b = 5
    
    (*(*arg1 + 0x44))()
    RECT* var_10_2
    int32_t* esi_9
    void* edi_4
    var_38
    
    if (var_10:2.b != 0)
        sub_4659bc()
        sub_465fa0(&var_2c, zx.d(var_10:2.b))
        var_c = &var_20:2
        sub_465bd0(&var_2c, sub_42c73c(arg1[0x64]), sub_4659bc(), 0, var_c)
        var_c = &var_20:2
        var_10_2 = &lprc
        sub_465b34(&var_2c, sub_42c73c(arg1[0x64]), sub_4659bc(), var_10_2, var_c)
        var_c = arg1
        int32_t left_1 = lprc.left
        int32_t* edi_5 = &var_1c:2
        int32_t* esi_5 = &var_38
        *edi_5 = *esi_5
        int32_t* edi_6 = &edi_5[1]
        int32_t* esi_6 = &esi_5[1]
        *edi_6 = *esi_6
        int32_t* edi_7 = &edi_6[1]
        *edi_7 = esi_6[1]
        edi_4 = &edi_7[1]
        esi_9 = var_c
    else
        sub_4659bc()
        sub_465d2c(&var_2c, zx.d(var_10:3.b))
        var_c = &var_20:2
        sub_465bd0(&var_2c, sub_42c73c(arg1[0x64]), sub_4659bc(), 0, var_c)
        var_c = &var_20:2
        var_10_2 = &lprc
        sub_465b34(&var_2c, sub_42c73c(arg1[0x64]), sub_4659bc(), var_10_2, var_c)
        var_c = arg1
        int32_t left = lprc.left
        void* edi_1 = &var_1c:2
        int32_t* esi_1 = &var_38
        *edi_1 = *esi_1
        void* edi_2 = edi_1 + 4
        void* esi_2 = &esi_1[1]
        *edi_2 = *esi_2
        int32_t* edi_3 = edi_2 + 4
        *edi_3 = *(esi_2 + 4)
        edi_4 = &edi_3[1]
        esi_9 = var_c
    int32_t** ecx_10
    
    if (var_10_2:3.b != 4)
        ecx_10 = &var_c
        sub_418a3c(0, 0, ecx_10)
    else
        if (var_10_2:2.b != 0)
            sub_42b2b0(*(esi_9[0x64] + 0xc), 0xff00000e)
        
        ecx_10 = &var_c
        sub_418a3c(1, 0, ecx_10)
    
    if (ebx.b != 0)
        *(esi_9 + 0x1b2) |= 4
    
    var_c = &var_c
    sub_4577d8(ecx_10, &var_40)
    int32_t eax_46 = var_40
    char eax_47 = *(esi_9 + 0x1a3)
    int32_t eax_48 = esi_9[0x6b]
    var_1c = esi_9[0x69]
    var_20 = zx.d(*(esi_9 + 0x1b2))
    var_24 = zx.d(esi_9[0x6a].b)
    int32_t eax_53 = sub_45a198(esi_9, 0)
    var_2c = &lprc
    sub_47ae24(&var_20:2, esi_9[0x64], esi_9[0x67], edi_4, var_2c, eax_53, var_24.b, var_20.b, 
        var_1c, eax_48, eax_47, eax_46, var_c)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_47b654
return sub_47b63f(&var_4) __tailcall
