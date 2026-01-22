// 函数: sub_47a088
// 地址: 0x47a088
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_40 = ebx
int32_t esi
int32_t var_44 = esi
char var_9 = arg2

if (var_9 == 2 && *(arg1 + 0x20) u< 3)
    var_9 = 0

int32_t result = *(arg1 + (zx.d(var_9) << 2) + 0xc)

if (result == 0xffffffff && ((*(**(arg1 + 4) + 0x2c))(arg3) | (*(**(arg1 + 4) + 0x20))()) != 0)
    int32_t cx = divs.dp.d(sx.q((*(**(arg1 + 4) + 0x2c))()), zx.d(*(arg1 + 0x20)))
    int32_t cy
    void* edx_8
    cy, edx_8 = (*(**(arg1 + 4) + 0x20))()
    
    if (*(arg1 + 8) == 0)
        if (data_4abbe4 == 0)
            edx_8.b = 1
            data_4abbe4 = sub_479d84(0x479bf0, edx_8)
        
        *(arg1 + 8) = sub_479df8(data_4abbe4, cx, cy)
    
    edx_8.b = 1
    int32_t* eax_19 = sub_430618(sub_42a104+0x140, edx_8)
    int32_t* var_4c = &var_4
    int32_t (* var_50)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*eax_19 + 0x40))(ExceptionList, var_50, var_4c)
    (*(*eax_19 + 0x34))()
    HDC hdc
    sub_418a64(cx, 0, 0, &hdc, cy)
    sub_42bbb0(*(sub_430bec(eax_19) + 0x14), 0xff00000f)
    sub_4303a8((*(**(arg1 + 4) + 0x24))())
    (*(*eax_19 + 0x38))()
    char ebx_1 = var_9
    
    if (ebx_1 s>= *(arg1 + 0x20))
        ebx_1 = 0
    
    void var_3c
    sub_418a64((zx.d(ebx_1) + 1) * cx, 0, zx.d(ebx_1) * cx, &var_3c, cy)
    
    if (var_9 u< 1)
    label_47a200:
        sub_42c124(sub_430bec(*(arg1 + 4)), &hdc, sub_430bec(eax_19), &var_3c)
        
        if (*(*(arg1 + 4) + 0x38) != 1)
            *(arg1 + (zx.d(var_9) << 2) + 0xc) = sub_479d28(*(arg1 + 8), eax_19)
        else
            *(arg1 + 0x1c)
            *(arg1 + (zx.d(var_9) << 2) + 0xc) = sub_479d28(*(arg1 + 8), eax_19)
    else
        if (var_9 == 1)
            int32_t var_18 = 0
            int32_t var_14 = 0
            int32_t* var_4c_4 = &var_4
            int32_t (* var_50_4)(void* arg1, void* arg2) = j_sub_40443c
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t* eax_49
            int32_t edx_19
            eax_49, edx_19 = sub_430618(sub_42a104+0x140, 1)
            edx_19.b = 1
            int32_t* eax_50 = sub_430618(sub_42a104+0x140, edx_19)
            *(arg1 + 4)
            (*(*eax_50 + 8))(ExceptionList, var_50_4, var_4c_4)
            int32_t edx_21
            edx_21.b = 1
            (*(*eax_50 + 0x70))(arg1)
            HDC hdcSrc
            int32_t x1_2
            
            if (*(arg1 + 0x20) u<= 1)
                *(arg1 + 4)
                (*(*eax_49 + 8))()
                int32_t edx_31
                edx_31.b = 1
                (*(*eax_49 + 0x70))()
                sub_42bbb0(*(sub_430bec(eax_49) + 0x14), 0)
                (*(*eax_49 + 0x40))()
                
                if (sub_430ca8(eax_49) != 0)
                    sub_42b2b0(*(sub_430bec(eax_49) + 0xc), 0xffffff)
                    sub_431be0(eax_49, 0)
                    sub_42bbb0(*(sub_430bec(eax_49) + 0x14), 0xffffff)
                
                sub_431be0(eax_49, 1)
                int32_t* eax_121 = sub_430bec(eax_19)
                sub_42bbb0(eax_121[5], 0xff00000f)
                sub_42c258(eax_121, &hdc)
                sub_42bbb0(eax_121[5], 0xff000014)
                SetTextColor(sub_42c73c(eax_121), 0)
                SetBkColor(sub_42c73c(eax_121), 0xffffff)
                enum ROP_CODE rop_3 = 0xe20746
                int32_t y1_3 = 0
                int32_t x1_3 = 0
                HDC hdcSrc_3 = sub_42c73c(sub_430bec(eax_49))
                int32_t y_3 = 1
                int32_t x_3 = 1
                hdc = sub_42c73c(eax_121)
                BitBlt(hdc, x_3, y_3, cx, cy, hdcSrc_3, x1_3, y1_3, rop_3)
                sub_42bbb0(eax_121[5], 0xff000010)
                SetTextColor(sub_42c73c(eax_121), 0)
                SetBkColor(sub_42c73c(eax_121), 0xffffff)
                enum ROP_CODE rop_4 = 0xe20746
                int32_t y1_4 = 0
                x1_2 = 0
                hdcSrc = sub_42c73c(sub_430bec(hdcSrc_3))
                int32_t y_4 = 0
                int32_t x_4 = 0
                hdc = sub_42c73c(eax_121)
                BitBlt(hdc, x_4, y_4, cx, cy, hdcSrc, x1_2, y1_4, rop_4)
            else
                int32_t* eax_56 = sub_430bec(eax_19)
                sub_42c124(sub_430bec(eax_50), &hdc, eax_56, &var_3c)
                sub_431be0(eax_49, 1)
                (*(*eax_49 + 0x40))()
                (*(*eax_49 + 0x34))()
                sub_42bbb0(*(sub_430bec(eax_50) + 0x14), 0xffffff)
                sub_42c124(sub_430bec(eax_50), &hdc, sub_430bec(eax_49), &var_3c)
                sub_42bbb0(eax_56[5], 0xff000014)
                HDC hdc_1 = sub_42c73c(eax_56)
                SetTextColor(hdc_1, 0)
                SetBkColor(hdc_1, 0xffffff)
                enum ROP_CODE rop = 0xe20746
                int32_t y1 = 0
                int32_t x1 = 0
                HDC hdcSrc_1 = sub_42c73c(sub_430bec(eax_49))
                int32_t y = 0
                int32_t x = 0
                hdc = hdc_1
                BitBlt(hdc, x, y, cx, cy, hdcSrc_1, x1, y1, rop)
                sub_42bbb0(*(sub_430bec(x1) + 0x14), 0x808080)
                sub_42c124(sub_430bec(x1), &hdc, sub_430bec(hdcSrc_1), &var_3c)
                sub_42bbb0(*(cy + 0x14), 0xff000010)
                HDC hdc_2 = sub_42c73c(cy)
                SetTextColor(hdc_2, 0)
                SetBkColor(hdc_2, 0xffffff)
                enum ROP_CODE rop_1 = 0xe20746
                int32_t y1_1 = 0
                int32_t x1_1 = 0
                HDC hdcSrc_2 = sub_42c73c(sub_430bec(hdcSrc_1))
                int32_t y_1 = 0
                int32_t x_1 = 0
                hdc = hdc_2
                BitBlt(hdc, x_1, y_1, cx, cy, hdcSrc_2, x1_1, y1_1, rop_1)
                int32_t eax_89 = sub_42ad8c(*(arg1 + 0x1c))
                sub_42bbb0(*(sub_430bec(x1_1) + 0x14), eax_89)
                sub_42c124(sub_430bec(x1_1), &hdc, sub_430bec(hdcSrc_2), &var_3c)
                sub_42bbb0(*(cy + 0x14), 0xff00000f)
                HDC hdc_3 = sub_42c73c(cy)
                SetTextColor(hdc_3, 0)
                SetBkColor(hdc_3, 0xffffff)
                enum ROP_CODE rop_2 = 0xe20746
                int32_t y1_2 = 0
                x1_2 = 0
                hdcSrc = sub_42c73c(sub_430bec(hdcSrc_2))
                int32_t y_2 = 0
                int32_t x_2 = 0
                hdc = hdc_3
                BitBlt(hdc, x_2, y_2, cx, cy, hdcSrc, x1_2, y1_2, rop_2)
            
            fsbase->NtTib.ExceptionList = arg1
            __return_addr = &data_47a5ff
            sub_403c68(x1_2)
            return sub_403c68(hdcSrc)
        
        if (var_9 - 2 u< 2)
            goto label_47a200
    
    fsbase->NtTib.ExceptionList = arg3
    int32_t var_40_1 = 0x47a63a
    return sub_403c68(eax_19)

return result
