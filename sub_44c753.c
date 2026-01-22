// 函数: sub_44c753
// 地址: 0x44c753
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*0x55000000 += arg3:1.b
int32_t var_4 = 0
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (*(arg6 - 0x49) != 0 && *(arg6 - 0x4a) != 0)
label_44c7a2:
    
    if ((*(arg6 + 0xc) & 1) != 0 || (*(arg6 + 0xc) & 0x40) != 0)
        if (sub_465ac4(sub_4659bc()) == 0)
            sub_42bbb0(*(*(arg6 - 0x14) + 0x14), 0xff00000d)
        else
            sub_42bbb0(*(*(arg6 - 0x14) + 0x14), 0xff00001d)
        
        sub_42b2b0(*(*(arg6 - 0x14) + 0xc), 0xff00000e)
    else if (*(arg6 + 8) != 0)
        sub_42bbb0(*(*(arg6 - 0x14) + 0x14), 0xff00001e)
else if (*(arg6 - 0x49) != 0 && sub_465ac4(sub_4659bc()) != 0)
    goto label_44c7a2

if (*(arg6 - 0x33) == 0 || *(arg6 - 0x49) != 0)
    sub_42c258(*(arg6 - 0x14), arg6 - 0x10)

if (*(arg6 - 0x30) == 0)
    if (sub_403df4(*(arg6 - 0x30), 0x44a554) == 0)
        *(arg6 - 0x31) = 0
    else
        *(arg6 - 0x31) = *(*(arg6 - 0x30) + 0x60)
else
    *(arg6 - 0x31) = 0

*(arg6 - 0x28) = *(arg6 - 0x10) + 1
int32_t eax_40 = *(arg6 - 0xc)
*(arg6 - 0x24) = eax_40 + 1
sub_404fb0(*(*(arg6 - 0x18) + 0x30), u"-")
void* ExceptionList

if (eax_40 != 0xffffffff)
    int32_t eax_56
    
    if (*(arg6 - 0x2c) == 0)
        eax_56 = 0
    else
        int32_t ebx = *(*(arg6 - 0x18) + 0x40)
        
        if (ebx s> 0xffffffff)
            eax_56 = sub_4670ec(*(arg6 - 0x2c))
        
        if (ebx s> 0xffffffff && ebx s< eax_56)
            eax_56.b = 1
        else if (*(*(arg6 - 0x18) + 0x38) == 0)
            eax_56 = 0
        else
            int32_t* esi = *(*(arg6 - 0x18) + 0x4c)
            
            if (esi == 0)
                eax_56.b = 1
            else if ((*(*esi + 0x1c))().b != 0)
                eax_56.b = 1
            else
                eax_56 = 0
    
    *(arg6 - 0x32) = eax_56.b
    
    if (*(arg6 - 0x32) != 0)
    label_44c964:
        *(arg6 - 0x4b) = 1
        
        if (*(arg6 - 0x32) == 0)
            *(arg6 - 0x20) = *(arg6 - 0x28) + 0x10
            *(arg6 - 0x1c) = *(arg6 - 0x24) + 0x10
        else
            *(arg6 - 0x20) = *(arg6 - 0x28) + *(*(arg6 - 0x2c) + 0x34)
            *(arg6 - 0x1c) = *(arg6 - 0x24) + *(*(arg6 - 0x2c) + 0x30)
        
        if (*(*(arg6 - 0x18) + 0x38) != 0 && *(arg6 - 0x49) == 0)
            *(arg6 - 0x20) += 1
            *(arg6 - 0x1c) += 1
            *(arg6 - 0x50) = sub_42bba8(*(*(arg6 - 0x14) + 0x14))
            
            if ((*(arg6 + 0xc) & 1) != 0)
                sub_42bbb0(*(*(arg6 - 0x14) + 0x14), 0xff00000f)
                sub_42c258(*(arg6 - 0x14), arg6 - 0x28)
            else
                *(arg6 - 0x50) = sub_42bba8(*(*(arg6 - 0x14) + 0x14))
                sub_432d8c(0xff00000f, 0xff000014)
                *(*(arg6 - 0x14) + 0x14)
                sub_42bb84()
                sub_42c258(*(arg6 - 0x14), arg6 - 0x28)
            
            sub_42bbb0(*(*(arg6 - 0x14) + 0x14), *(arg6 - 0x50))
            *(arg6 - 0x28) += 1
            *(arg6 - 0x24) += 1
        
        if (*(arg6 - 0x32) == 0)
            *(arg6 - 0x48) = *(arg6 - 0x28)
            void* edi_1 = arg6 - 0x44
            void* esi_3 = arg6 - 0x24
            *edi_1 = *esi_3
            void* edi_2 = edi_1 + 4
            void* esi_4 = esi_3 + 4
            *edi_2 = *esi_4
            *(edi_2 + 4) = *(esi_4 + 4)
            
            if ((*(**(*(arg6 - 0x18) + 0x4c) + 0x2c))() s< *(arg6 - 0x20) - *(arg6 - 0x28))
                int32_t eax_169 = (*(**(*(arg6 - 0x18) + 0x4c) + 0x2c))()
                int32_t edx_52 = *(arg6 - 0x20) - *(arg6 - 0x28) - eax_169
                int32_t edx_53 = edx_52 s>> 1
                bool c_3 = unimplemented  {sar edx, 0x1}
                
                if (edx_52 s>> 1 s< 0)
                    edx_53 = adc.d(edx_53, 0, c_3)
                
                *(arg6 - 0x28) = edx_53 + *(arg6 - 0x28) + 1
                *(arg6 - 0x20) = (*(**(*(arg6 - 0x18) + 0x4c) + 0x2c))() + *(arg6 - 0x28)
            
            if ((*(**(*(arg6 - 0x18) + 0x4c) + 0x20))() s< *(arg6 - 0x1c) - *(arg6 - 0x24))
                int32_t eax_184 = (*(**(*(arg6 - 0x18) + 0x4c) + 0x20))()
                int32_t edx_67 = *(arg6 - 0x1c) - *(arg6 - 0x24) - eax_184
                int32_t edx_68 = edx_67 s>> 1
                bool c_4 = unimplemented  {sar edx, 0x1}
                
                if (edx_67 s>> 1 s< 0)
                    edx_68 = adc.d(edx_68, 0, c_4)
                
                *(arg6 - 0x24) = edx_68 + *(arg6 - 0x24) + 1
                *(arg6 - 0x1c) = (*(**(*(arg6 - 0x18) + 0x4c) + 0x20))() + *(arg6 - 0x24)
            
            sub_42c424(*(arg6 - 0x14), arg6 - 0x28, *(*(arg6 - 0x18) + 0x4c))
            *(arg6 - 0x28) = *(arg6 - 0x48)
            void* edi_6 = arg6 - 0x24
            void* esi_8 = arg6 - 0x44
            *edi_6 = *esi_8
            void* edi_7 = edi_6 + 4
            void* esi_9 = esi_8 + 4
            *edi_7 = *esi_9
            *(edi_7 + 4) = *(esi_9 + 4)
        else
            int32_t ebx_2 = *(*(arg6 - 0x18) + 0x40)
            int32_t eax_118
            void* edx_13
            
            if (ebx_2 s> 0xffffffff)
                eax_118, edx_13 = sub_4670ec(*(arg6 - 0x2c))
            
            if (ebx_2 s<= 0xffffffff || ebx_2 s>= eax_118)
                edx_13.b = 1
                *(arg6 - 0x54) = sub_430618(sub_42a104+0x140, edx_13)
                void* const* var_20_2 = &__return_addr
                int32_t (* var_24_2)(void* arg1, void* arg2) = j_sub_40443c
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                void* edx_22
                edx_22.b = 1
                (*(**(arg6 - 0x54) + 0x3c))(ExceptionList, var_24_2, var_20_2)
                HBITMAP eax_134 = LoadBitmapA(nullptr, 0x7ff8)
                sub_4319c4(*(arg6 - 0x54), eax_134)
                *(arg6 - 0x50) = *(*(*(arg6 - 0x14) + 0xc) + 0x18)
                sub_42b2b0(*(*(arg6 - 0x14) + 0xc), 0xff000012)
                int32_t eax_148 = (*(**(arg6 - 0x54) + 0x20))(*(arg6 - 0x54))
                int32_t esi_1 = *(arg6 - 0x24)
                int32_t edx_29 = *(arg6 - 0x1c) - esi_1 - eax_148
                int32_t edx_30 = edx_29 s>> 1
                bool c_1 = unimplemented  {sar edx, 0x1}
                
                if (edx_29 s>> 1 s< 0)
                    edx_30 = adc.d(edx_30, 0, c_1)
                
                int32_t eax_151 = (*(**(arg6 - 0x54) + 0x2c))(edx_30 + esi_1 + 1)
                int32_t ebx_3 = *(arg6 - 0x28)
                int32_t edx_37 = *(arg6 - 0x20) - ebx_3 - eax_151
                int32_t edx_38 = edx_37 s>> 1
                bool c_2 = unimplemented  {sar edx, 0x1}
                
                if (edx_37 s>> 1 s< 0)
                    edx_38 = adc.d(edx_38, 0, c_2)
                
                sub_42c1ac(arg5, edx_38 + ebx_3 + 1, *(arg6 - 0x14), arg4)
                sub_42b2b0(*(*(arg6 - 0x14) + 0xc), *(arg6 - 0x50))
                int32_t entry_ebx
                fsbase->NtTib.ExceptionList = entry_ebx
                __return_addr = &data_44ccfd
                return sub_403c68(*(arg6 - 0x54))
            
            int32_t eax_120 = *(arg6 - 0x24)
            int32_t eax_123 = *(*(arg6 - 0x18) + 0x40)
            ExceptionList = zx.d(*(*(arg6 - 0x18) + 0x39))
            *(arg6 - 0x28)
            *(arg6 - 0x14)
            sub_467604(*(arg6 - 0x2c), ExceptionList.b, eax_123, eax_120)
        
        if (*(*(arg6 - 0x18) + 0x38) != 0)
            *(arg6 - 0x20) -= 1
            *(arg6 - 0x1c) -= 1
    else
        int32_t* ebx_1 = *(*(arg6 - 0x18) + 0x4c)
        char eax_65
        
        if (ebx_1 != 0)
            eax_65 = (*(*ebx_1 + 0x1c))()
        
        if (ebx_1 != 0 && eax_65 == 0)
            goto label_44c964
        
        if (*(arg6 - 0x2c) == 0 || *(arg6 + 8) != 0)
            *(arg6 - 0x20) = *(arg6 - 0x28)
            *(arg6 - 0x1c) = *(arg6 - 0x24)
        else
            *(arg6 - 0x20) = *(arg6 - 0x28) + *(*(arg6 - 0x2c) + 0x34)
            *(arg6 - 0x1c) = *(arg6 - 0x24) + *(*(arg6 - 0x2c) + 0x30)
        
        *(arg6 - 0x4b) = 0
else
    sub_42c258(*(arg6 - 0x14), arg6 - 0x10)
    *(arg6 - 0x28) = 0
    *(arg6 - 0x20) = 0xfffffffc
    *(arg6 - 0x4b) = 0

*(arg6 - 0x28) -= 1
*(arg6 - 0x24) -= 1
*(arg6 - 0x20) += 2
*(arg6 - 0x1c) += 2

if (*(*(arg6 - 0x18) + 0x38) != 0)
label_44cdaf:
    
    if (*(arg6 - 0x49) == 0)
        enum DRAW_EDGE_FLAGS grfFlags = BF_RECT
        enum DRAWEDGE_FLAGS edge_2 = *((zx.d(*(*(arg6 - 0x18) + 0x38)) << 2) + &data_4ab804)
        ExceptionList = arg6 - 0x28
        DrawEdge(sub_42c73c(*(arg6 - 0x14)), ExceptionList, edge_2, grfFlags)
else if (*(arg6 - 0x33) != 0 && *(arg6 - 0x4b) != 0)
    goto label_44cdaf

if (*(arg6 - 0x33) != 0)
    if (*(arg6 - 0x4b) != 0)
        *(arg6 - 0x10) = *(arg6 - 0x20) + 1
    
    if (*(arg6 - 0x55) == 0 || *(arg6 + 8) == 0)
        sub_42bbb0(*(*(arg6 - 0x14) + 0x14), 0xff00000d)
    
    sub_42c258(*(arg6 - 0x14), arg6 - 0x10)

if (*(arg6 + 8) != 0 && *(arg6 - 0x55) != 0 && (*(arg6 - 0x49) == 0 || *(arg6 - 0x4a) == 0))
    if (*(arg6 - 0x33) != 0)
        enum DRAW_EDGE_FLAGS grfFlags_1 = BF_RECT
        enum DRAWEDGE_FLAGS edge = BDR_SUNKENOUTER
        ExceptionList = arg6 - 0x10
        DrawEdge(sub_42c73c(*(arg6 - 0x14)), ExceptionList, edge, grfFlags_1)
    else if ((*(arg6 + 0xc) & 0x40) != 0)
        enum DRAW_EDGE_FLAGS grfFlags_2 = BF_RECT
        enum DRAWEDGE_FLAGS edge_1 = BDR_RAISEDINNER
        ExceptionList = arg6 - 0x10
        DrawEdge(sub_42c73c(*(arg6 - 0x14)), ExceptionList, edge_1, grfFlags_2)
    
    if (*(arg6 - 0x33) == 0)
        int32_t dy_1 = 0xffffffff
        int32_t dx_2 = 0
        ExceptionList = arg6 - 0x10
        OffsetRect(ExceptionList, dx_2, dy_1)

if (*(arg6 - 0x33) == 0 || *(arg6 - 0x4b) == 0)
    *(arg6 - 0x10) = *(arg6 - 0x20) + 1

*(arg6 - 0x10) += 2
*(arg6 - 8) -= 1
*(arg6 - 0x38) = zx.d(*((zx.d(*(arg6 - 0x31)) << 1) + &data_4ab7fc)) | 0x60

if (*(arg6 - 0x56) != 0 && (*(arg6 + 0xd) & 1) != 0)
    *(arg6 - 0x38) |= 0x100000

*(arg6 - 0x48) = *(arg6 - 0x10)
void* edi_11 = arg6 - 0x44
void* esi_13 = arg6 - 0xc
*edi_11 = *esi_13
void* edi_12 = edi_11 + 4
void* esi_14 = esi_13 + 4
*edi_12 = *esi_14
*(edi_12 + 4) = *(esi_14 + 4)

if ((*(arg6 + 0xc) & 0x20) != 0)
    sub_42b644(*(*(arg6 - 0x14) + 0xc), 1)

RECT* var_20_3 = arg6 - 0x10
char eax_286 = *(arg6 - 0x33)
ExceptionList = *(arg6 - 0x38) | 0x400 | 0x100
void* ebp = sub_44b9d4(*(arg6 - 0x18), *(arg6 - 0x14), *(*(arg6 - 0x18) + 0x30), ExceptionList, 
    eax_286, var_20_3)
int32_t eax_299 =
    *(*(ebp + 8) - 0x3c) - *(*(ebp + 8) - 0x44) - (*(*(ebp + 8) - 4) - *(*(ebp + 8) - 0xc))
int32_t dy_2 = eax_299 s>> 1
bool c_5 = unimplemented  {sar eax, 0x1}

if (eax_299 s>> 1 s< 0)
    dy_2 = adc.d(dy_2, 0, c_5)

int32_t dx = 0
RECT* lprc = *(ebp + 8) - 0x10
OffsetRect(lprc, dx, dy_2)

if (*(*(ebp + 8) + 8) != 0 && *(*(ebp + 8) - 0x33) != 0 && *(*(ebp + 8) - 0x55) != 0
        && *(*(ebp + 8) - 0x49) == 0)
    int32_t dy = 0
    int32_t dx_1 = 1
    lprc = *(ebp + 8) - 0x10
    OffsetRect(lprc, dx_1, dy)

RECT* eax_309 = *(ebp + 8) - 0x10
char eax_311 = *(*(ebp + 8) - 0x33)
lprc = *(*(ebp + 8) - 0x38)
RECT** esp = &lprc
void* ebp_1 = sub_44b9d4(*(*(ebp + 8) - 0x18), *(*(ebp + 8) - 0x14), 
    *(*(*(ebp + 8) - 0x18) + 0x30), lprc, eax_311, eax_309)

if (*(*(*(ebp_1 + 8) - 0x18) + 0x60) != 0 && *(*(ebp_1 + 8) + 8) == 0
        && (*(*(ebp_1 + 8) - 0x57) == 0 || *(*(*(ebp_1 + 8) - 0x18) + 0x5c) == 0))
    *(*(ebp_1 + 8) - 0x10) = *(*(ebp_1 + 8) - 8)
    *(*(ebp_1 + 8) - 8) = *(*(ebp_1 + 8) - 0x40) - 0xa
    RECT* eax_331 = *(ebp_1 + 8) - 0x10
    char eax_333 = *(*(ebp_1 + 8) - 0x33)
    RECT* var_40 = 2
    esp = &var_40
    void* ebp_2 = sub_44a9d0(*(*(*(ebp_1 + 8) - 0x18) + 0x60), ebp_1 - 4)
    ebp_1 = sub_44b9d4(*(*(ebp_2 + 8) - 0x18), *(*(ebp_2 + 8) - 0x14), *(ebp_2 - 4), var_40, 
        eax_333, eax_331)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_44d0bd
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
