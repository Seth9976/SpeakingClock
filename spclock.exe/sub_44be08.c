// 函数: sub_44be08
// 地址: 0x44be08
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* var_8 = nullptr
int32_t* var_7c = &var_4
int32_t (* var_80)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* dy

if (*(arg2 + 8) == 0)
    int32_t eax_16 = sub_42c73c(*(arg2 - 0x14))
    void* eax_17
    int32_t edx_1
    eax_17, edx_1 = sub_4659bc()
    edx_1.b = 7
    (*data_4ac200)(sub_465a84(eax_17, edx_1), eax_16, 9, 0, arg2 - 0x10, 0)
    int32_t eax_23 = *((zx.d(*(*(arg2 - 0x18) + 0x39)) << 2) + &data_4ab80c)
    void* eax_24
    int32_t edx_2
    eax_24, edx_2 = sub_4659bc()
    edx_2.b = 7
    (*data_4ac390)(sub_465a84(eax_24, edx_2), 0xe, eax_23, 0xedb, &dy)
    sub_42b2b0(*(*(arg2 - 0x14) + 0xc), dy)
else
    if ((*(arg2 + 0xc) & 1) != 0 || (*(arg2 + 0xc) & 0x40) != 0)
        sub_42bbb0(*(*(arg2 - 0x14) + 0x14), 0xff00001d)
        sub_42b2b0(*(*(arg2 - 0x14) + 0xc), 0xff00000e)
    else
        sub_42bbb0(*(*(arg2 - 0x14) + 0x14), 0xff00001e)
    
    sub_42c258(*(arg2 - 0x14), arg2 - 0x10)

int32_t eax_33 =
    *((zx.d(*(*(arg2 - 0x18) + 0x39)) << 3) + &data_4ab81c + (zx.d(*(*(arg2 - 0x18) + 0x3d)) << 2))
int32_t eax_36 = sub_42c73c(*(arg2 - 0x14))
void* eax_37
int32_t edx_7
eax_37, edx_7 = sub_4659bc()
edx_7.b = 7
int32_t dx
(*data_4ac1fc)(sub_465a84(eax_37, edx_7), eax_36, 0xb, eax_33, 0, 1, &dx)
int32_t var_3c
dy = &var_3c
int32_t var_10 = 0
RECT* lprc_1 = 0xe12
int32_t eax_43 =
    *((zx.d(*(*(arg2 - 0x18) + 0x39)) << 3) + &data_4ab81c + (zx.d(*(*(arg2 - 0x18) + 0x3d)) << 2))
dx = 0xb
int32_t* lprc = sub_42c73c(*(arg2 - 0x14))
void* eax_47
int32_t edx_11
eax_47, edx_11 = sub_4659bc()
edx_11.b = 7
(*data_4ac2a0)(sub_465a84(eax_47, edx_11), lprc, dx, eax_43, lprc_1, var_10, dy)
int32_t var_5c
int32_t var_38
int32_t var_30

if (arg1 == 1)
    dy = var_30 * 2 + (arg2 - 0x10)->top + eax_43
    sub_418a64((arg2 - 0x10)->right, (arg2 - 0x10)->top, (arg2 - 0x10)->right - dx - var_38 * 2, 
        &var_5c, dy)
else
    dy = var_30 * 2 + (arg2 - 0x10)->top + eax_43
    sub_418a64(var_38 * 2 + (arg2 - 0x10)->left + dx, (arg2 - 0x10)->top, (arg2 - 0x10)->left, 
        &var_5c, dy)
dy = arg2 - 0x18
*(arg2 - 0x28) = var_5c
void* edi_3 = arg2 - 0x24
void var_58
void* esi_2 = &var_58
*edi_3 = *esi_2
void* edi_4 = edi_3 + 4
void* esi_3 = esi_2 + 4
*edi_4 = *esi_3
*(edi_4 + 4) = *(esi_3 + 4)
int32_t* dy_3 = dy

if (*(arg2 - 0x2c) != 0)
    int32_t eax_69 = *(*(arg2 - 0x2c) + 0x30)
    
    if (eax_69 s> eax_43)
        *(arg2 - 0x1c) += eax_69 - eax_43
    
    int32_t eax_73 = *(*(arg2 - 0x2c) + 0x34)
    
    if (eax_73 s> dx)
        if (arg1 == 1)
            *(arg2 - 0x28) -= eax_73 - dx
        else
            *(arg2 - 0x20) += eax_73 - dx
    
    int32_t var_50
    int32_t eax_78 = *(arg2 - 0x1c) - var_50
    int32_t dy_2 = eax_78 s>> 1
    bool c_1 = unimplemented  {sar eax, 0x1}
    
    if (eax_78 s>> 1 s< 0)
        dy_2 = adc.d(dy_2, 0, c_1)
    
    dy = dy_2
    int32_t var_54
    int32_t eax_81 = *(arg2 - 0x20) - var_54
    int32_t dx_1 = eax_81 s>> 1
    bool c_2 = unimplemented  {sar eax, 0x1}
    
    if (eax_81 s>> 1 s< 0)
        dx_1 = adc.d(dx_1, 0, c_2)
    
    lprc_1 = &var_5c
    OffsetRect(lprc_1, dx_1, dy)

dy = dy_3
int32_t var_4c = *(arg2 - 0x28)
void var_48
void* edi_8 = &var_48
void* esi_7 = arg2 - 0x24
*edi_8 = *esi_7
void* edi_9 = edi_8 + 4
void* esi_8 = esi_7 + 4
*edi_9 = *esi_8
*(edi_9 + 4) = *(esi_8 + 4)
int32_t* dy_4 = dy
void* var_44

if (arg1 != 0)
    var_44 = *(arg2 - 0x28)

dy = &lprc_1
int32_t var_10_6 = 1
lprc_1 = nullptr
int32_t var_18_1 = 0
dx = 0xd
lprc = sub_42c73c(*(arg2 - 0x14))
void* eax_88
int32_t edx_18
eax_88, edx_18 = sub_4659bc()
edx_18.b = 7
(*data_4ac1fc)(sub_465a84(eax_88, edx_18), lprc, dx, var_18_1, lprc_1, var_10_6, dy)
enum DRAW_TEXT_FORMAT var_2c
dy = &var_2c
int32_t var_10_7 = 0
lprc_1 = 0xe11
int32_t var_18_2 = 0
dx = 0xd
lprc = sub_42c73c(*(arg2 - 0x14))
void* eax_95
int32_t edx_19
eax_95, edx_19 = sub_4659bc()
edx_19.b = 7
(*data_4ac2a0)(sub_465a84(eax_95, edx_19), lprc, dx, var_18_2, lprc_1, var_10_7, dy)
void* var_44_2

if (arg1 == 1)
    var_4c -= lprc_1 + var_38
    int32_t var_28
    var_44_2 = var_44 - var_28
else
    var_44_2 = var_44 + lprc_1 + var_3c + var_2c

if (*(arg2 + 8) == 0)
    dy = nullptr
    int32_t* var_10_8 = &var_4c
    lprc_1 = nullptr
    var_18_2 = 0xd
    dx = sub_42c73c(*(arg2 - 0x14))
    void* eax_110
    int32_t edx_20
    eax_110, edx_20 = sub_4659bc()
    edx_20.b = 7
    lprc = sub_465a84(eax_110, edx_20)
    (*data_4ac200)(lprc, dx, var_18_2, lprc_1, var_10_8, dy)

int32_t temp2 = *(arg2 - 0x30)
bool cond:0 = temp2 == 0

if (temp2 == 0)
    char eax_118 = sub_403df4(*(arg2 - 0x30), 0x44a554)
    cond:0 = eax_118 == 0
    
    if (eax_118 == 0)
        *(arg2 - 0x31) = 0
    else
        *(arg2 - 0x31) = *(*(arg2 - 0x30) + 0x60)
else
    *(arg2 - 0x31) = 0

sub_404fb0(*(*dy_4 + 0x30), sub_44c753+5)

if (not(cond:0))
    int32_t eax_129
    
    if (*(arg2 - 0x2c) == 0)
        eax_129 = 0
    else
        if (*(*dy_4 + 0x40) s> 0xffffffff)
            eax_129 = sub_4670ec(*(arg2 - 0x2c))
        
        if (*(*dy_4 + 0x40) s> 0xffffffff && eax_129 s> *(*dy_4 + 0x40))
            eax_129.b = 1
        else if (*(*dy_4 + 0x38) == 0)
            eax_129 = 0
        else if (*(*dy_4 + 0x4c) == 0)
            eax_129.b = 1
        else if ((*(**(*dy_4 + 0x4c) + 0x1c))().b != 0)
            eax_129.b = 1
        else
            eax_129 = 0
    
    *(arg2 - 0x32) = eax_129.b
    
    if (*(arg2 - 0x32) != 0)
    label_44c217:
        
        if (*(arg2 - 0x32) == 0)
            dy = 0x10
            int32_t var_6c
            sub_418a64(0x10, 0, 0, &var_6c, dy)
            int32_t edx_49 = *(arg2 - 0x1c) - *(arg2 - 0x24) - 0x10
            int32_t edx_50 = edx_49 s>> 1
            bool c_5 = unimplemented  {sar edx, 0x1}
            
            if (edx_49 s>> 1 s< 0)
                edx_50 = adc.d(edx_50, 0, c_5)
            
            dy = edx_50 + *(arg2 - 0x24)
            int32_t eax_170 = *(arg2 - 0x28)
            int32_t edx_55 = *(arg2 - 0x20) - eax_170 - 0x10
            int32_t edx_56 = edx_55 s>> 1
            bool c_6 = unimplemented  {sar edx, 0x1}
            
            if (edx_55 s>> 1 s< 0)
                edx_56 = adc.d(edx_56, 0, c_6)
            
            lprc_1 = &var_6c
            OffsetRect(lprc_1, edx_56 + eax_170, dy)
            
            if ((*(**(*dy_4 + 0x4c) + 0x2c))() s< dx)
                int32_t eax_176 = (*(**(*dy_4 + 0x4c) + 0x2c))()
                int32_t var_64
                int32_t edx_62 = var_64 - var_6c - eax_176
                int32_t edx_63 = edx_62 s>> 1
                bool c_7 = unimplemented  {sar edx, 0x1}
                
                if (edx_62 s>> 1 s< 0)
                    edx_63 = adc.d(edx_63, 0, c_7)
                
                var_6c += edx_63
                int32_t var_64_1 = (*(**(*dy_4 + 0x4c) + 0x2c))() + var_6c
            
            if ((*(**(*dy_4 + 0x4c) + 0x20))() s< var_18_2)
                int32_t eax_186 = (*(**(*dy_4 + 0x4c) + 0x20))()
                int32_t var_68
                int32_t var_60
                int32_t edx_69 = var_60 - var_68 - eax_186
                int32_t edx_70 = edx_69 s>> 1
                bool c_8 = unimplemented  {sar edx, 0x1}
                
                if (edx_69 s>> 1 s< 0)
                    edx_70 = adc.d(edx_70, 0, c_8)
                
                var_60 = (*(**(*dy_4 + 0x4c) + 0x20))() + var_68 + edx_70
            
            sub_42c424(*(arg2 - 0x14), &var_6c, *(*dy_4 + 0x4c))
        else
            int32_t eax_142
            
            if (*(*dy_4 + 0x40) s> 0xffffffff)
                eax_142 = sub_4670ec(*(arg2 - 0x2c))
            
            if (*(*dy_4 + 0x40) s> 0xffffffff && eax_142 s> *(*dy_4 + 0x40))
                int32_t edx_30 = *(arg2 - 0x1c) - *(arg2 - 0x24) - *(*(arg2 - 0x2c) + 0x30)
                int32_t edx_31 = edx_30 s>> 1
                bool c_3 = unimplemented  {sar edx, 0x1}
                
                if (edx_30 s>> 1 s< 0)
                    edx_31 = adc.d(edx_31, 0, c_3)
                
                dy = edx_31 + *(arg2 - 0x24)
                int32_t edx_34 = *(*dy_4 + 0x40)
                lprc_1 = zx.d(*(*dy_4 + 0x39))
                unimplemented  {sar ecx, 0x1}
                *(arg2 - 0x20) - *(arg2 - 0x28) - *(*(arg2 - 0x2c) + 0x34)
                *(arg2 - 0x14)
                sub_467604(*(arg2 - 0x2c), lprc_1.b, edx_34, dy)
            else if (*(arg2 + 8) == 0)
                dy = nullptr
                int32_t* var_10_10 = &var_5c
                lprc_1 = *((zx.d(*(*dy_4 + 0x39)) << 2) + &data_4ab814)
                int32_t var_18_3 = 0xc
                dx = sub_42c73c(*(arg2 - 0x14))
                void* eax_155
                int32_t edx_41
                eax_155, edx_41 = sub_4659bc()
                edx_41.b = 7
                lprc = sub_465a84(eax_155, edx_41)
                (*data_4ac200)(lprc, dx, var_18_3, lprc_1, var_10_10, dy)
                dy = nullptr
                int32_t* var_10_11 = &var_5c
                lprc_1 =
                    *((zx.d(*(*dy_4 + 0x39)) << 3) + &data_4ab81c + (zx.d(*(*dy_4 + 0x3d)) << 2))
                int32_t var_18_4 = 0xb
                dx = sub_42c73c(*(arg2 - 0x14))
                void* eax_165
                int32_t edx_45
                eax_165, edx_45 = sub_4659bc()
                edx_45.b = 7
                lprc = sub_465a84(eax_165, edx_45)
                (*data_4ac200)(lprc, dx, var_18_4, lprc_1, var_10_11, dy)
    else if (*(*dy_4 + 0x4c) != 0 && (*(**(*dy_4 + 0x4c) + 0x1c))() == 0)
        goto label_44c217

if (*(arg2 - 0x33) != 0 && *(arg2 + 8) == 0)
    dy = nullptr
    lprc_1 = 2
    int32_t var_18_5 = 0xe
    dx = sub_42c73c(*(arg2 - 0x14))
    void* eax_199
    int32_t edx_73
    eax_199, edx_73 = sub_4659bc()
    edx_73.b = 7
    lprc = sub_465a84(eax_199, edx_73)
    (*data_4ac200)(lprc, dx, var_18_5, lprc_1, arg2 - 0x10, dy)

dy = &var_2c
int32_t var_10_15 = 0
lprc_1 = 0xe11
int32_t var_18_6 = 1
dx = 0xe
lprc = sub_42c73c(*(arg2 - 0x14))
void* eax_206
int32_t edx_74
eax_206, edx_74 = sub_4659bc()
edx_74.b = 7
(*data_4ac2a0)(sub_465a84(eax_206, edx_74), lprc, dx, var_18_6, lprc_1, var_10_15, dy)
bool cond:1

if (*(arg2 + 8) == 0)
    bool cond:2_1
    
    if (arg1 == 1)
        (arg2 - 0x10)->right = var_4c
        enum DRAW_TEXT_FORMAT eax_215 = var_2c
        int32_t right = (arg2 - 0x10)->right
        (arg2 - 0x10)->right -= eax_215
        cond:1 = right == eax_215
        cond:2_1 = right == eax_215
    else
        (arg2 - 0x10)->left = var_44_2
        enum DRAW_TEXT_FORMAT eax_213 = var_2c
        int32_t left = (arg2 - 0x10)->left
        (arg2 - 0x10)->left += eax_213
        cond:1 = left == neg.d(eax_213)
        cond:2_1 = left == neg.d(eax_213)
    
    sub_404fb0(*(*dy_4 + 0x30), sub_44c753+5)
    
    if (not(cond:2_1))
        dy = &lprc_1
        int32_t var_10_16 = 1
        lprc_1 = nullptr
        int32_t var_18_7 = 1
        dx = 0x10
        lprc = sub_42c73c(*(arg2 - 0x14))
        void* eax_221
        int32_t edx_75
        eax_221, edx_75 = sub_4659bc()
        edx_75.b = 7
        (*data_4ac1fc)(sub_465a84(eax_221, edx_75), lprc, dx, var_18_7, lprc_1, var_10_16, dy)
        
        if (arg1 == 1)
            RECT* lprc_3 = lprc_1
            int32_t left_3 = (arg2 - 0x10)->left
            (arg2 - 0x10)->left += lprc_3
            cond:1 = left_3 == neg.d(lprc_3)
        else
            RECT* lprc_2 = lprc_1
            int32_t right_3 = (arg2 - 0x10)->right
            (arg2 - 0x10)->right -= lprc_2
            cond:1 = right_3 == lprc_2
else if ((*(arg2 - 0x2c) == 0 || *(*dy_4 + 0x40) == 0xffffffff) && *(*dy_4 + 0x4c) == 0)
    if (arg1 != 0)
        enum DRAW_TEXT_FORMAT eax_236 = var_2c
        int32_t right_1 = (arg2 - 0x10)->right
        (arg2 - 0x10)->right -= eax_236
        cond:1 = right_1 == eax_236
    else
        enum DRAW_TEXT_FORMAT eax_235 = var_2c
        int32_t left_1 = (arg2 - 0x10)->left
        (arg2 - 0x10)->left += eax_235
        cond:1 = left_1 == neg.d(eax_235)
else if (arg1 != 0)
    int32_t eax_234 = *(arg2 - 0x20) - *(arg2 - 0x28)
    int32_t right_2 = (arg2 - 0x10)->right
    (arg2 - 0x10)->right -= eax_234
    cond:1 = right_2 == eax_234
else
    int32_t eax_231 = *(arg2 - 0x20) - *(arg2 - 0x28)
    int32_t left_2 = (arg2 - 0x10)->left
    (arg2 - 0x10)->left += eax_231
    cond:1 = left_2 == neg.d(eax_231)

sub_404fb0(*(*dy_4 + 0x30), sub_44c753+5)
int32_t** esp

if (cond:1)
    if (arg1 != 0)
        (arg2 - 0x10)->right = var_4c - 1
    else
        (arg2 - 0x10)->left = var_44_2 + 1
    
    dy = &var_2c
    int32_t var_10_19 = 0
    lprc_1 = 0xe11
    int32_t var_18_9 = 0
    dx = 0xf
    lprc = sub_42c73c(*(arg2 - 0x14))
    void* eax_296
    int32_t edx_91
    eax_296, edx_91 = sub_4659bc()
    edx_91.b = 7
    (*data_4ac2a0)(sub_465a84(eax_296, edx_91), lprc, dx, var_18_9, lprc_1, var_10_19, dy)
    (arg2 - 0x10)->bottom -= lprc
    dy = nullptr
    lprc_1 = nullptr
    int32_t var_18_10 = 0xf
    dx = sub_42c73c(*(arg2 - 0x14))
    void* eax_304
    int32_t edx_92
    eax_304, edx_92 = sub_4659bc()
    edx_92.b = 7
    lprc = sub_465a84(eax_304, edx_92)
    (*data_4ac200)(lprc, dx, var_18_10, lprc_1, arg2 - 0x10, dy)
    esp = &var_8
else
    *(arg2 - 0x38) = zx.d(*((zx.d(*(arg2 - 0x31)) << 1) + &data_4ab7fc)) | 0x60
    
    if ((*(arg2 + 0xd) & 1) != 0)
        *(arg2 - 0x38) |= 0x100000
    
    dy = dy_4
    *(arg2 - 0x48) = (arg2 - 0x10)->left
    void* edi_14 = arg2 - 0x44
    int32_t* esi_12 = arg2 - 0xc
    *edi_14 = (esi_12 - 4)->top
    void* edi_15 = edi_14 + 4
    int32_t* esi_13 = &esi_12[1]
    *edi_15 = (esi_13 - 8)->right
    *(edi_15 + 4) = (&esi_13[1] - 0xc)->bottom
    int32_t* dy_5 = dy
    dy = arg2 - 0x10
    uint32_t eax_247 = zx.d(*(arg2 - 0x33))
    lprc_1 = *(arg2 - 0x38) | 0x400 | 0x100
    void* ebp_2
    void** esi_16
    int32_t* lprc_4
    ebp_2, esi_16, lprc_4 = sub_44bc30(*dy_5, *(arg2 - 0x14), *(*dy_5 + 0x30), lprc_1, eax_247)
    
    if (arg1 != 0)
        *lprc_4 = *(*(ebp_2 + 8) - 0x48)
        lprc_4[2] = *(*(ebp_2 + 8) - 0x40)
    
    int32_t eax_262 = *(*(ebp_2 + 8) - 0x3c) - *(*(ebp_2 + 8) - 0x44) - (lprc_4[3] - lprc_4[1])
    int32_t dy_1 = eax_262 s>> 1
    bool c_9 = unimplemented  {sar eax, 0x1}
    
    if (eax_262 s>> 1 s< 0)
        dy_1 = adc.d(dy_1, 0, c_9)
    
    dx = 0
    lprc = lprc_4
    OffsetRect(lprc, dx, dy_1)
    int32_t* lprc_5 = lprc_4
    dx = zx.d(*(*(ebp_2 + 8) - 0x33))
    lprc = *(*(ebp_2 + 8) - 0x38)
    esp = &lprc
    int32_t* esi_17
    RECT* edi_19
    ebp_1, esi_17, edi_19 = sub_44bc30(*esi_16, *(*(ebp_2 + 8) - 0x14), *(*esi_16 + 0x30), lprc, dx)
    
    if (*(*esi_17 + 0x60) != 0 && *(ebp_1[2] + 8) == 0 && *(*esi_17 + 0x5c) == 0)
        void* ebp_3
        void** esi_18
        ebp_3, esi_18 = sub_44a9d0(*(*esi_17 + 0x60), &ebp_1[-1])
        
        if (arg1 != 0)
            edi_19->left = *(ebp_3 - 0x10) * 2 + *(ebp_3 - 0x28) + *(ebp_3 - 0x24)
            edi_19->right = sub_42c570(*(*(ebp_3 + 8) - 0x14), *(ebp_3 - 4)) + edi_19->left
        else
            edi_19->left = edi_19->right
            edi_19->right = *(*(ebp_3 + 8) - 0x40) - *(ebp_3 - 0x10) - *(ebp_3 - 0x28)
        
        char eax_286 = *(*(ebp_3 + 8) - 0x33)
        var_2c = DT_RIGHT
        esp = &var_2c
        ebp_1 = sub_44b9d4(*esi_18, *(*(ebp_3 + 8) - 0x14), *(ebp_3 - 4), var_2c, eax_286, edi_19)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_44c746
return sub_44c736(ebp_1) __tailcall
