// 函数: sub_44c75c
// 地址: 0x44c75c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (*(arg2 - 0x49) != 0 && *(arg2 - 0x4a) != 0)
label_44c7a2:
    
    if ((*(arg2 + 0xc) & 1) != 0 || (*(arg2 + 0xc) & 0x40) != 0)
        if (sub_465ac4(sub_4659bc()) == 0)
            sub_42bbb0(*(*(arg2 - 0x14) + 0x14), 0xff00000d)
        else
            sub_42bbb0(*(*(arg2 - 0x14) + 0x14), 0xff00001d)
        
        sub_42b2b0(*(*(arg2 - 0x14) + 0xc), 0xff00000e)
    else if (*(arg2 + 8) != 0)
        sub_42bbb0(*(*(arg2 - 0x14) + 0x14), 0xff00001e)
else if (*(arg2 - 0x49) != 0 && sub_465ac4(sub_4659bc()) != 0)
    goto label_44c7a2

if (*(arg2 - 0x33) == 0 || *(arg2 - 0x49) != 0)
    sub_42c258(*(arg2 - 0x14), arg2 - 0x10)

if (*(arg2 - 0x30) == 0)
    if (sub_403df4(*(arg2 - 0x30), 0x44a554) == 0)
        *(arg2 - 0x31) = 0
    else
        *(arg2 - 0x31) = *(*(arg2 - 0x30) + 0x60)
else
    *(arg2 - 0x31) = 0

*(arg2 - 0x28) = *(arg2 - 0x10) + 1
int32_t eax_40 = *(arg2 - 0xc)
*(arg2 - 0x24) = eax_40 + 1
sub_404fb0(*(*(arg2 - 0x18) + 0x30), u"-")
void* ExceptionList

if (eax_40 != 0xffffffff)
    int32_t eax_56
    
    if (*(arg2 - 0x2c) == 0)
        eax_56 = 0
    else
        int32_t ebx = *(*(arg2 - 0x18) + 0x40)
        
        if (ebx s> 0xffffffff)
            eax_56 = sub_4670ec(*(arg2 - 0x2c))
        
        if (ebx s> 0xffffffff && ebx s< eax_56)
            eax_56.b = 1
        else if (*(*(arg2 - 0x18) + 0x38) == 0)
            eax_56 = 0
        else
            int32_t* esi = *(*(arg2 - 0x18) + 0x4c)
            
            if (esi == 0)
                eax_56.b = 1
            else if ((*(*esi + 0x1c))().b != 0)
                eax_56.b = 1
            else
                eax_56 = 0
    
    *(arg2 - 0x32) = eax_56.b
    
    if (*(arg2 - 0x32) != 0)
    label_44c964:
        *(arg2 - 0x4b) = 1
        
        if (*(arg2 - 0x32) == 0)
            *(arg2 - 0x20) = *(arg2 - 0x28) + 0x10
            *(arg2 - 0x1c) = *(arg2 - 0x24) + 0x10
        else
            *(arg2 - 0x20) = *(arg2 - 0x28) + *(*(arg2 - 0x2c) + 0x34)
            *(arg2 - 0x1c) = *(arg2 - 0x24) + *(*(arg2 - 0x2c) + 0x30)
        
        if (*(*(arg2 - 0x18) + 0x38) != 0 && *(arg2 - 0x49) == 0)
            *(arg2 - 0x20) += 1
            *(arg2 - 0x1c) += 1
            *(arg2 - 0x50) = sub_42bba8(*(*(arg2 - 0x14) + 0x14))
            
            if ((*(arg2 + 0xc) & 1) != 0)
                sub_42bbb0(*(*(arg2 - 0x14) + 0x14), 0xff00000f)
                sub_42c258(*(arg2 - 0x14), arg2 - 0x28)
            else
                *(arg2 - 0x50) = sub_42bba8(*(*(arg2 - 0x14) + 0x14))
                sub_432d8c(0xff00000f, 0xff000014)
                *(*(arg2 - 0x14) + 0x14)
                sub_42bb84()
                sub_42c258(*(arg2 - 0x14), arg2 - 0x28)
            
            sub_42bbb0(*(*(arg2 - 0x14) + 0x14), *(arg2 - 0x50))
            *(arg2 - 0x28) += 1
            *(arg2 - 0x24) += 1
        
        if (*(arg2 - 0x32) == 0)
            *(arg2 - 0x48) = *(arg2 - 0x28)
            void* edi_2 = arg2 - 0x44
            void* esi_3 = arg2 - 0x24
            *edi_2 = *esi_3
            void* edi_3 = edi_2 + 4
            void* esi_4 = esi_3 + 4
            *edi_3 = *esi_4
            *(edi_3 + 4) = *(esi_4 + 4)
            
            if ((*(**(*(arg2 - 0x18) + 0x4c) + 0x2c))() s< *(arg2 - 0x20) - *(arg2 - 0x28))
                int32_t eax_169 = (*(**(*(arg2 - 0x18) + 0x4c) + 0x2c))()
                int32_t edx_53 = *(arg2 - 0x20) - *(arg2 - 0x28) - eax_169
                int32_t edx_54 = edx_53 s>> 1
                bool c_3 = unimplemented  {sar edx, 0x1}
                
                if (edx_53 s>> 1 s< 0)
                    edx_54 = adc.d(edx_54, 0, c_3)
                
                *(arg2 - 0x28) = edx_54 + *(arg2 - 0x28) + 1
                *(arg2 - 0x20) = (*(**(*(arg2 - 0x18) + 0x4c) + 0x2c))() + *(arg2 - 0x28)
            
            if ((*(**(*(arg2 - 0x18) + 0x4c) + 0x20))() s< *(arg2 - 0x1c) - *(arg2 - 0x24))
                int32_t eax_184 = (*(**(*(arg2 - 0x18) + 0x4c) + 0x20))()
                int32_t edx_68 = *(arg2 - 0x1c) - *(arg2 - 0x24) - eax_184
                int32_t edx_69 = edx_68 s>> 1
                bool c_4 = unimplemented  {sar edx, 0x1}
                
                if (edx_68 s>> 1 s< 0)
                    edx_69 = adc.d(edx_69, 0, c_4)
                
                *(arg2 - 0x24) = edx_69 + *(arg2 - 0x24) + 1
                *(arg2 - 0x1c) = (*(**(*(arg2 - 0x18) + 0x4c) + 0x20))() + *(arg2 - 0x24)
            
            sub_42c424(*(arg2 - 0x14), arg2 - 0x28, *(*(arg2 - 0x18) + 0x4c))
            *(arg2 - 0x28) = *(arg2 - 0x48)
            void* edi_7 = arg2 - 0x24
            void* esi_8 = arg2 - 0x44
            *edi_7 = *esi_8
            void* edi_8 = edi_7 + 4
            void* esi_9 = esi_8 + 4
            *edi_8 = *esi_9
            *(edi_8 + 4) = *(esi_9 + 4)
        else
            int32_t ebx_2 = *(*(arg2 - 0x18) + 0x40)
            int32_t eax_118
            void* edx_14
            
            if (ebx_2 s> 0xffffffff)
                eax_118, edx_14 = sub_4670ec(*(arg2 - 0x2c))
            
            if (ebx_2 s<= 0xffffffff || ebx_2 s>= eax_118)
                edx_14.b = 1
                *(arg2 - 0x54) = sub_430618(sub_42a104+0x140, edx_14)
                int32_t* var_24_2 = &var_4
                int32_t (* var_28_2)(void* arg1, void* arg2) = j_sub_40443c
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                void* edx_23
                edx_23.b = 1
                (*(**(arg2 - 0x54) + 0x3c))(ExceptionList, var_28_2, var_24_2)
                HBITMAP eax_134 = LoadBitmapA(nullptr, 0x7ff8)
                sub_4319c4(*(arg2 - 0x54), eax_134)
                *(arg2 - 0x50) = *(*(*(arg2 - 0x14) + 0xc) + 0x18)
                sub_42b2b0(*(*(arg2 - 0x14) + 0xc), 0xff000012)
                int32_t eax_148 = (*(**(arg2 - 0x54) + 0x20))(*(arg2 - 0x54))
                int32_t esi_1 = *(arg2 - 0x24)
                int32_t edx_30 = *(arg2 - 0x1c) - esi_1 - eax_148
                int32_t edx_31 = edx_30 s>> 1
                bool c_1 = unimplemented  {sar edx, 0x1}
                
                if (edx_30 s>> 1 s< 0)
                    edx_31 = adc.d(edx_31, 0, c_1)
                
                int32_t eax_151 = (*(**(arg2 - 0x54) + 0x2c))(edx_31 + esi_1 + 1)
                int32_t ebx_3 = *(arg2 - 0x28)
                int32_t edx_38 = *(arg2 - 0x20) - ebx_3 - eax_151
                int32_t edx_39 = edx_38 s>> 1
                bool c_2 = unimplemented  {sar edx, 0x1}
                
                if (edx_38 s>> 1 s< 0)
                    edx_39 = adc.d(edx_39, 0, c_2)
                
                int32_t* entry_ebx
                sub_42c1ac(arg1, edx_39 + ebx_3 + 1, *(arg2 - 0x14), entry_ebx)
                sub_42b2b0(*(*(arg2 - 0x14) + 0xc), *(arg2 - 0x50))
                fsbase->NtTib.ExceptionList = var_8
                __return_addr = &data_44ccfd
                return sub_403c68(*(arg2 - 0x54))
            
            int32_t eax_120 = *(arg2 - 0x24)
            int32_t eax_123 = *(*(arg2 - 0x18) + 0x40)
            ExceptionList = zx.d(*(*(arg2 - 0x18) + 0x39))
            *(arg2 - 0x28)
            *(arg2 - 0x14)
            sub_467604(*(arg2 - 0x2c), ExceptionList.b, eax_123, eax_120)
        
        if (*(*(arg2 - 0x18) + 0x38) != 0)
            *(arg2 - 0x20) -= 1
            *(arg2 - 0x1c) -= 1
    else
        int32_t* ebx_1 = *(*(arg2 - 0x18) + 0x4c)
        char eax_65
        
        if (ebx_1 != 0)
            eax_65 = (*(*ebx_1 + 0x1c))()
        
        if (ebx_1 != 0 && eax_65 == 0)
            goto label_44c964
        
        if (*(arg2 - 0x2c) == 0 || *(arg2 + 8) != 0)
            *(arg2 - 0x20) = *(arg2 - 0x28)
            *(arg2 - 0x1c) = *(arg2 - 0x24)
        else
            *(arg2 - 0x20) = *(arg2 - 0x28) + *(*(arg2 - 0x2c) + 0x34)
            *(arg2 - 0x1c) = *(arg2 - 0x24) + *(*(arg2 - 0x2c) + 0x30)
        
        *(arg2 - 0x4b) = 0
else
    sub_42c258(*(arg2 - 0x14), arg2 - 0x10)
    *(arg2 - 0x28) = 0
    *(arg2 - 0x20) = 0xfffffffc
    *(arg2 - 0x4b) = 0

*(arg2 - 0x28) -= 1
*(arg2 - 0x24) -= 1
*(arg2 - 0x20) += 2
*(arg2 - 0x1c) += 2

if (*(*(arg2 - 0x18) + 0x38) != 0)
label_44cdaf:
    
    if (*(arg2 - 0x49) == 0)
        enum DRAW_EDGE_FLAGS grfFlags = BF_RECT
        enum DRAWEDGE_FLAGS edge_2 = *((zx.d(*(*(arg2 - 0x18) + 0x38)) << 2) + &data_4ab804)
        ExceptionList = arg2 - 0x28
        DrawEdge(sub_42c73c(*(arg2 - 0x14)), ExceptionList, edge_2, grfFlags)
else if (*(arg2 - 0x33) != 0 && *(arg2 - 0x4b) != 0)
    goto label_44cdaf

if (*(arg2 - 0x33) != 0)
    if (*(arg2 - 0x4b) != 0)
        *(arg2 - 0x10) = *(arg2 - 0x20) + 1
    
    if (*(arg2 - 0x55) == 0 || *(arg2 + 8) == 0)
        sub_42bbb0(*(*(arg2 - 0x14) + 0x14), 0xff00000d)
    
    sub_42c258(*(arg2 - 0x14), arg2 - 0x10)

if (*(arg2 + 8) != 0 && *(arg2 - 0x55) != 0 && (*(arg2 - 0x49) == 0 || *(arg2 - 0x4a) == 0))
    if (*(arg2 - 0x33) != 0)
        enum DRAW_EDGE_FLAGS grfFlags_1 = BF_RECT
        enum DRAWEDGE_FLAGS edge = BDR_SUNKENOUTER
        ExceptionList = arg2 - 0x10
        DrawEdge(sub_42c73c(*(arg2 - 0x14)), ExceptionList, edge, grfFlags_1)
    else if ((*(arg2 + 0xc) & 0x40) != 0)
        enum DRAW_EDGE_FLAGS grfFlags_2 = BF_RECT
        enum DRAWEDGE_FLAGS edge_1 = BDR_RAISEDINNER
        ExceptionList = arg2 - 0x10
        DrawEdge(sub_42c73c(*(arg2 - 0x14)), ExceptionList, edge_1, grfFlags_2)
    
    if (*(arg2 - 0x33) == 0)
        int32_t dy_1 = 0xffffffff
        int32_t dx_2 = 0
        ExceptionList = arg2 - 0x10
        OffsetRect(ExceptionList, dx_2, dy_1)

if (*(arg2 - 0x33) == 0 || *(arg2 - 0x4b) == 0)
    *(arg2 - 0x10) = *(arg2 - 0x20) + 1

*(arg2 - 0x10) += 2
*(arg2 - 8) -= 1
*(arg2 - 0x38) = zx.d(*((zx.d(*(arg2 - 0x31)) << 1) + &data_4ab7fc)) | 0x60

if (*(arg2 - 0x56) != 0 && (*(arg2 + 0xd) & 1) != 0)
    *(arg2 - 0x38) |= 0x100000

*(arg2 - 0x48) = *(arg2 - 0x10)
void* edi_12 = arg2 - 0x44
void* esi_13 = arg2 - 0xc
*edi_12 = *esi_13
void* edi_13 = edi_12 + 4
void* esi_14 = esi_13 + 4
*edi_13 = *esi_14
*(edi_13 + 4) = *(esi_14 + 4)

if ((*(arg2 + 0xc) & 0x20) != 0)
    sub_42b644(*(*(arg2 - 0x14) + 0xc), 1)

RECT* var_24_3 = arg2 - 0x10
char eax_286 = *(arg2 - 0x33)
ExceptionList = *(arg2 - 0x38) | 0x400 | 0x100
void* ebp_1 = sub_44b9d4(*(arg2 - 0x18), *(arg2 - 0x14), *(*(arg2 - 0x18) + 0x30), ExceptionList, 
    eax_286, var_24_3)
int32_t eax_299 =
    *(*(ebp_1 + 8) - 0x3c) - *(*(ebp_1 + 8) - 0x44) - (*(*(ebp_1 + 8) - 4) - *(*(ebp_1 + 8) - 0xc))
int32_t dy_2 = eax_299 s>> 1
bool c_5 = unimplemented  {sar eax, 0x1}

if (eax_299 s>> 1 s< 0)
    dy_2 = adc.d(dy_2, 0, c_5)

int32_t dx = 0
RECT* lprc = *(ebp_1 + 8) - 0x10
OffsetRect(lprc, dx, dy_2)

if (*(*(ebp_1 + 8) + 8) != 0 && *(*(ebp_1 + 8) - 0x33) != 0 && *(*(ebp_1 + 8) - 0x55) != 0
        && *(*(ebp_1 + 8) - 0x49) == 0)
    int32_t dy = 0
    int32_t dx_1 = 1
    lprc = *(ebp_1 + 8) - 0x10
    OffsetRect(lprc, dx_1, dy)

RECT* eax_309 = *(ebp_1 + 8) - 0x10
char eax_311 = *(*(ebp_1 + 8) - 0x33)
lprc = *(*(ebp_1 + 8) - 0x38)
RECT** esp = &lprc
void* ebp_2 = sub_44b9d4(*(*(ebp_1 + 8) - 0x18), *(*(ebp_1 + 8) - 0x14), 
    *(*(*(ebp_1 + 8) - 0x18) + 0x30), lprc, eax_311, eax_309)

if (*(*(*(ebp_2 + 8) - 0x18) + 0x60) != 0 && *(*(ebp_2 + 8) + 8) == 0
        && (*(*(ebp_2 + 8) - 0x57) == 0 || *(*(*(ebp_2 + 8) - 0x18) + 0x5c) == 0))
    *(*(ebp_2 + 8) - 0x10) = *(*(ebp_2 + 8) - 8)
    *(*(ebp_2 + 8) - 8) = *(*(ebp_2 + 8) - 0x40) - 0xa
    RECT* eax_331 = *(ebp_2 + 8) - 0x10
    char eax_333 = *(*(ebp_2 + 8) - 0x33)
    RECT* var_44 = 2
    esp = &var_44
    void* ebp_3 = sub_44a9d0(*(*(*(ebp_2 + 8) - 0x18) + 0x60), ebp_2 - 4)
    ebp_2 = sub_44b9d4(*(*(ebp_3 + 8) - 0x18), *(*(ebp_3 + 8) - 0x14), *(ebp_3 - 4), var_44, 
        eax_333, eax_331)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_44d0bd
sub_404b88(ebp_2 - 4)
return ebp_2 - 4
