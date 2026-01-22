// 函数: sub_42fd44
// 地址: 0x42fd44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ecx
int32_t var_10 = ecx
int32_t edx
int32_t var_c = edx
int32_t var_14 = 0

if (*(arg2 + 0x18) == 0)
label_42fd84:
    
    if (*(arg2 + 0x18) != 0)
    label_42fda7:
        ebp_1 = sub_42f900(arg1)
        ebp_1[-0x1c] = 0
        HGDIOBJ ExceptionList_4
        
        if (ebp_1[-1] != 0)
            int32_t c = 0x54
            ExceptionList_4 = ebp_1[-1]
            
            if (GetObjectA(ExceptionList_4, c, &ebp_1[-0x22]) s< 0x18)
                sub_42ca20()
        
        HDC eax_10 = GetDC(nullptr)
        sub_42cb40(eax_10)
        ebp_1[-6] = eax_10
        HDC eax_12 = CreateCompatibleDC(ebp_1[-6])
        sub_42cb40(eax_12)
        ebp_1[-7] = eax_12
        int32_t* var_ac_4 = ebp_1
        int32_t (* var_b0_1)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList_4 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_4
        HBITMAP ExceptionList_1
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
        uint32_t ExceptionList_3
        
        if (*(ebp_1[3] + 0x18) u< 0x28)
            if ((*(ebp_1[3] + 0x10) | *(ebp_1[3] + 0x12)) != 1)
                int32_t cy = *(ebp_1[3] + 8)
                int32_t cx = *(ebp_1[3] + 4)
                ExceptionList_3 = ebp_1[-6]
                HBITMAP eax_24 = CreateCompatibleBitmap(ExceptionList_3, cx, cy)
                sub_42cb40(eax_24)
                ebp_1[-4] = eax_24
            else
                int32_t lpBits = 0
                uint32_t nBitCount = 1
                ExceptionList_3 = 1
                HBITMAP eax_20 = CreateBitmap(*(ebp_1[3] + 4), *(ebp_1[3] + 8), ExceptionList_3, 
                    nBitCount, lpBits)
                sub_42cb40(eax_20)
                ebp_1[-4] = eax_20
            
            sub_42cb40(ebp_1[-4])
            HGDIOBJ eax_90 = SelectObject(ebp_1[-7], ebp_1[-4])
            sub_42cb40(eax_90)
            ebp_1[-5] = eax_90
            int32_t* var_b8_5 = ebp_1
            int32_t (* var_bc_4)() = j_sub_404188
            ExceptionList_3 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_3
            int32_t* var_c4_7 = ebp_1
            int32_t (* var_c8_8)(void* arg1, void* arg2) = j_sub_40443c
            ExceptionList_2 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_2
            ebp_1[-0xd] = 0
            HPALETTE hPal_1 = nullptr
            
            if (ebp_1[-3] != 0)
                BOOL bForceBkgd_1 = 0
                HPALETTE hPal = ebp_1[-3]
                ExceptionList_1 = ebp_1[-7]
                ebp_1[-0xd] = SelectPalette(ExceptionList_1, hPal, bForceBkgd_1)
                RealizePalette(ebp_1[-7])
            
            int32_t* var_d0_5 = ebp_1
            int32_t (* var_d4_3)(void* arg1, void* arg2) = j_sub_40443c
            ExceptionList_1 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_1
            void* ExceptionList
            
            if (ebp_1[2] == 0)
                enum ROP_CODE rop = WHITENESS
                int32_t h = *(ebp_1[3] + 8)
                ExceptionList = *(ebp_1[3] + 4)
                PatBlt(ebp_1[-7], 0, 0, ExceptionList, h, rop)
            else
                HBRUSH hbr
                hbr, ebp_1 = sub_42bc04(*(ebp_1[2] + 0x14))
                int32_t eax_97 = *(ebp_1[3] + 8)
                ExceptionList = &ebp_1[-0x26]
                sub_418a64(*(ebp_1[3] + 4), 0, 0, ExceptionList, eax_97)
                ExceptionList = ebp_1[-7]
                FillRect(ExceptionList, &ebp_1[-0x26], hbr)
                COLORREF color = sub_42ad8c(*(*(ebp_1[2] + 0xc) + 0x18))
                SetTextColor(ebp_1[-7], color)
                COLORREF color_1 = sub_42ad8c(sub_42bba8(*(ebp_1[2] + 0x14)))
                SetBkColor(ebp_1[-7], color_1)
                
                if (*(ebp_1[3] + 0x26) == 1 && *(ebp_1[3] + 0x14) != 0)
                    ebp_1[-0xc] = sub_42ad8c(*(*(ebp_1[2] + 0xc) + 0x18))
                    ebp_1[-0xb] = sub_42ad8c(sub_42bba8(*(ebp_1[2] + 0x14)))
                    RGBQUAD* prgbq = &ebp_1[-0xc]
                    uint32_t cEntries = 2
                    ExceptionList = nullptr
                    SetDIBColorTable(ebp_1[-7], ExceptionList, cEntries, prgbq)
            
            if (ebp_1[-1] == 0)
                fsbase->NtTib.ExceptionList = ExceptionList_1
                int32_t (* var_d0_6)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, HGDIOBJ arg4, 
                    int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_430317
                
                if (ebp_1[-3] == 0)
                    return nullptr
                
                BOOL bForceBkgd = 0xffffffff
                ExceptionList_1 = ebp_1[-0xd]
                return SelectPalette(ebp_1[-7], ExceptionList_1, bForceBkgd)
            
            HDC eax_126 = CreateCompatibleDC(ebp_1[-6])
            sub_42cb40(eax_126)
            ebp_1[-8] = eax_126
            int32_t* var_dc_7 = ebp_1
            int32_t (* var_e0_5)(void* arg1, void* arg2) = j_sub_40443c
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            HGDIOBJ h_1 = SelectObject(ebp_1[-8], ebp_1[-1])
            sub_42cb40(h_1)
            
            if (ebp_1[-2] != 0)
                hPal_1 = SelectPalette(ebp_1[-8], ebp_1[-2], 0)
                RealizePalette(ebp_1[-8])
            
            if (ebp_1[2] != 0)
                COLORREF color_2 = sub_42ad8c(*(*(ebp_1[2] + 0xc) + 0x18))
                SetTextColor(ebp_1[-8], color_2)
                COLORREF color_3 = sub_42ad8c(sub_42bba8(*(ebp_1[2] + 0x14)))
                SetBkColor(ebp_1[-8], color_3)
            
            BitBlt(ebp_1[-7], 0, 0, *(ebp_1[3] + 4), *(ebp_1[3] + 8), ebp_1[-8], 0, 0, SRCCOPY)
            
            if (ebp_1[-2] != 0)
                SelectPalette(ebp_1[-8], hPal_1, 0xffffffff)
            
            sub_42cb40(SelectObject(ebp_1[-8], h_1))
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t var_dc_8 = 0x4302ed
            return DeleteDC(ebp_1[-8])
        
        ebp_1[-9] = sub_402ea8(0x42c)
        int32_t* var_b8_2 = ebp_1
        int32_t (* var_bc_2)(void* arg1, void* arg2) = j_sub_40443c
        ExceptionList_3 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_3
        *(ebp_1[3] + 0x18) = 0x28
        *(ebp_1[3] + 0x24) = 1
        
        if (*(ebp_1[3] + 0x26) == 0)
            *(ebp_1[3] + 0x26) = GetDeviceCaps(ebp_1[-6], 0xc) * GetDeviceCaps(ebp_1[-6], 0xe)
        
        __builtin_memcpy(ebp_1[-9], ebp_1[3] + 0x18, 0x28)
        *(ebp_1[3] + 4) = *(ebp_1[3] + 0x1c)
        *(ebp_1[3] + 8) = *(ebp_1[3] + 0x20)
        
        if (*(ebp_1[3] + 0x26) u> 8)
            int16_t eax_63 = *(ebp_1[3] + 0x26)
            
            if (eax_63 != 0x10)
                ebp_1[3]
            
            if ((eax_63 == 0x10 || eax_63 == 0x20) && (*(ebp_1[3] + 0x28) & 3) != 0)
                sub_42fcf8(ebp_1[3])
                sub_4030d0(ebp_1[3] + 0x40, ebp_1[-9] + 0x28, 0xc)
        else if (*(ebp_1[3] + 0x26) == 1 && (ebp_1[-1] == 0 || ebp_1[-0x1d] == 0))
            *(ebp_1[-9] + 0x28) = 0
            *(ebp_1[-9] + 0x2c) = 0xffffff
        else if (ebp_1[-3] != 0)
            sub_42d2dc(ebp_1[-3], ebp_1[-9] + 0x28, 0xff)
        else if (ebp_1[-1] != 0)
            ebp_1[-5] = SelectObject(ebp_1[-7], ebp_1[-1])
            
            if (ebp_1[-0x1c] u<= 0 || ebp_1[-0x1d] == 0)
                enum DIB_USAGE usage_1 = DIB_RGB_COLORS
                BITMAPINFO* lpbmi = ebp_1[-9]
                ExceptionList_2 = nullptr
                int32_t eax_55
                int32_t edx_7
                edx_7:eax_55 = sx.q(*(ebp_1[3] + 0x20))
                uint32_t start = 0
                ExceptionList_1 = ebp_1[-1]
                GetDIBits(ebp_1[-7], ExceptionList_1, start, (eax_55 ^ edx_7) - edx_7, 
                    ExceptionList_2, lpbmi, usage_1)
            else
                RGBQUAD* prgbq_1 = ebp_1[-9] + 0x28
                uint32_t cEntries_1 = 0x100
                ExceptionList_2 = nullptr
                *(ebp_1[3] + 0x38) =
                    GetDIBColorTable(ebp_1[-7], ExceptionList_2, cEntries_1, prgbq_1)
            
            SelectObject(ebp_1[-7], ebp_1[-5])
        
        uint32_t offset = 0
        HANDLE hSection = nullptr
        ExceptionList_2 = &ebp_1[-0xa]
        enum DIB_USAGE usage = DIB_RGB_COLORS
        BITMAPINFO* pbmi = ebp_1[-9]
        ExceptionList_1 = ebp_1[-6]
        HBITMAP eax_71 =
            CreateDIBSection(ExceptionList_1, pbmi, usage, ExceptionList_2, hSection, offset)
        sub_42cb40(eax_71)
        ebp_1[-4] = eax_71
        
        if (ebp_1[-0xa] == 0)
            sub_42ca98()
        
        if (ebp_1[-1] == 0 || *(ebp_1[3] + 0x1c) != ebp_1[-0x21]
                || *(ebp_1[3] + 0x20) != ebp_1[-0x20] || *(ebp_1[3] + 0x26) u<= 8)
            fsbase->NtTib.ExceptionList = ExceptionList_3
            int32_t var_b8_3 = 0x4300a3
            return sub_402ec4(ebp_1[-9])
        
        enum DIB_USAGE usage_2 = DIB_RGB_COLORS
        BITMAPINFO* lpbmi_1 = ebp_1[-9]
        ExceptionList_2 = ebp_1[-0xa]
        int32_t eax_80
        int32_t edx_10
        edx_10:eax_80 = sx.q(*(ebp_1[3] + 0x20))
        uint32_t start_1 = 0
        ExceptionList_1 = ebp_1[-1]
        GetDIBits(ebp_1[-7], ExceptionList_1, start_1, (eax_80 ^ edx_10) - edx_10, ExceptionList_2, 
            lpbmi_1, usage_2)
        sub_4045c8(ExceptionList_3, var_bc_2)
        sub_4045c8(ExceptionList_4, var_b0_1)
    else if (*(arg2 + 4) != 0 && *(arg2 + 8) != 0)
        goto label_42fda7
else if (*(arg2 + 0x1c) != 0 && *(arg2 + 0x20) != 0)
    goto label_42fd84

*ebp_1
return ebp_1[-4]
