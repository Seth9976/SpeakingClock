// 函数: sub_48f494
// 地址: 0x48f494
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t lprect = *arg7
void var_20
void* edi = &var_20
void* esi_1 = &arg7[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t* var_28 = arg3
int32_t edi_4 = 0
uint32_t esi_5 = 0
char eax = 0
int32_t var_40 = 0

if (arg2 != 0)
    eax = sub_406cb8(&lprect)
    
    if (eax == 0)
        char var_29_1 = 0
        HRGN hrgn_1 = nullptr
        int32_t* ExceptionList
        
        if (arg1 == 0)
            DRAWTEXTPARAMS* lpdtp = nullptr
            ExceptionList = &lprect
            int32_t cchText = sub_404e48(arg2)
            uint8_t* lpchText = sub_490140(arg2)
            return DrawTextExA(sub_42c73c(var_28), lpchText, cchText, ExceptionList, arg6, lpdtp)
        
        if (sub_403df4(arg1, 0x48742c) != 0)
            if (arg1[0xc].w != 0)
                var_29_1 = 2
            else
                var_29_1 = 1
        
        int32_t edx
        
        if ((arg5 & 8) != 0)
            if (arg4 == 0)
                HRGN hrgn_3
                hrgn_3, edx = CreateRectRgnIndirect(&lprect)
                hrgn_1 = hrgn_3
            else
                HRGN hrgn_2
                hrgn_2, edx = CreateRectRgnIndirect(arg4)
                hrgn_1 = hrgn_2
        
        int32_t* var_8c_3 = &__saved_ebp
        int32_t (* var_90_2)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        if (hrgn_1 != 0)
            SelectClipRgn(sub_42c73c(var_28), hrgn_1)
        
        char ebx = arg1[9].b
        
        if ((arg5 & 2) == 0 && arg1[6].b != 3)
            int32_t var_3c_2 = 0xff000011
            char eax_25 = arg1[6].b
            
            if (eax_25 u>= 1)
                if (eax_25 == 2)
                    ebx = 1
            else if ((arg5 & 4) != 0)
                ebx = 1
        else if (arg1[9].b - 5 u>= 2)
            int32_t var_3c_1 = *(var_28[3] + 0x18)
        else
            int32_t var_3c = sub_42bba8(var_28[5])
        
        if (var_29_1 u<= 0)
            int32_t lprect_1 = lprect
            void var_10
            void* edi_5 = &var_10
            int32_t** esi_6 = &var_20
            *edi_5 = *esi_6
            void* edi_6 = edi_5 + 4
            void* esi_7 = &esi_6[1]
            *edi_6 = *esi_7
            *(edi_6 + 4) = *(esi_7 + 4)
            edi_4 = 0
            esi_5 = 0
        else
            if (var_29_1 == 2 && sub_403df4(arg1, 0x48742c) != 0 && arg1[0xc].w != 0)
                HGDIOBJ h
                h, ebp = sub_42b2f0(var_28[3])
                void pv
                GetObjectA(h, 0x3c, &pv)
                ebp[-0x1c] = zx.d(*(ebp[-0xc] + 0x30)) * 0xa
                HFONT eax_36 = CreateFontIndirectA(&ebp[-0x1e])
                sub_42b52c(*(ebp[-9] + 0xc), eax_36)
            
            if (sub_403df4(ebp[-0xc], 0x48742c) != 0)
                sub_406c1c(ebp[-6], zx.d(*(ebp[-0xc] + 0x34)) + ebp[-7], 
                    zx.d(*(ebp[-0xc] + 0x32)) + ebp[-8], &ebp[-4], ebp[-5])
        
        if (*(ebp[-0xc] + 0x28) != 0)
            SetTextCharacterExtra(sub_42c73c(ebp[-9]), *(ebp[-0xc] + 0x28))
        
        if (ebx - 9 u< 2)
            char eax_54 = *(ebp[-0xc] + 0x25)
            
            if (eax_54 u< 1)
                char eax_61 = *(ebp[-0xc] + 0x1a)
                edi_4 = zx.d(eax_61)
                uint32_t edx_5 = zx.d(eax_61)
                esi_5 = neg.d(edx_5)
                sub_406cd0(&ebp[-4], 0, edx_5 + 1)
            else if (eax_54 == 1)
                int32_t eax_65 = neg.d(zx.d(*(ebp[-0xc] + 0x1a)))
                edi_4 = eax_65
                esi_5 = eax_65
                sub_406cd0(&ebp[-4], zx.d(*(ebp[-0xc] + 0x1a)) + 1, zx.d(*(ebp[-0xc] + 0x1a)) + 1)
            else if (eax_54 == 2)
                uint32_t eax_56 = zx.d(*(ebp[-0xc] + 0x1a))
                edi_4 = eax_56
                esi_5 = eax_56
            else if (eax_54 == 3)
                char eax_58 = *(ebp[-0xc] + 0x1a)
                uint32_t edx_3 = zx.d(eax_58)
                edi_4 = neg.d(edx_3)
                esi_5 = zx.d(eax_58)
                sub_406cd0(&ebp[-4], edx_3 + 1, 0)
            
            int32_t eax_70
            int32_t edx_8
            edx_8:eax_70 = sx.q(esi_5)
            int32_t eax_74
            int32_t edx_9
            edx_9:eax_74 = sx.q(edi_4)
            
            if ((eax_70 ^ edx_8) - edx_8 s>= (eax_74 ^ edx_9) - edx_9)
                int32_t eax_82
                edx:eax_82 = sx.q(esi_5)
                ebp[-0xf] = (eax_82 ^ edx) - edx
            else
                int32_t eax_78
                edx:eax_78 = sx.q(edi_4)
                ebp[-0xf] = (eax_78 ^ edx) - edx
        
        edx.b = 1
        sub_42bcec(*(ebp[-9] + 0x14), edx.b)
        
        switch (zx.d(ebx))
            case 1
                uint32_t eax_113 = zx.d(*(ebp[-0xc] + 0x19))
                ebp[-2] -= eax_113
                sub_48f3d4(eax_113, eax_113, *(ebp[-0xc] + 0x1c), ebp)
                int32_t eax_116 = neg.d(zx.d(*(ebp[-0xc] + 0x19)))
                sub_48f3d4(eax_116, eax_116, ebp[-0xe], ebp)
            case 2
                ebp[-2] -= zx.d(*(ebp[-0xc] + 0x19))
                sub_48f3d4(0, 0, *(ebp[-0xc] + 0x1c), ebp)
                uint32_t eax_121 = zx.d(*(ebp[-0xc] + 0x19))
                sub_48f3d4(eax_121, eax_121, ebp[-0xe], ebp)
            case 3, 5
                ebp[-2] -= zx.d(*(ebp[-0xc] + 0x19)) + zx.d(*(ebp[-0xc] + 0x1a))
                sub_48f3d4(0, 0, *(ebp[-0xc] + 0x20), ebp)
                uint32_t eax_133 = zx.d(*(ebp[-0xc] + 0x19)) + zx.d(*(ebp[-0xc] + 0x1a))
                sub_48f3d4(eax_133, eax_133, *(ebp[-0xc] + 0x1c), ebp)
                int32_t eax_136 = neg.d(zx.d(*(ebp[-0xc] + 0x19)))
                sub_48f3d4(eax_136, eax_136, ebp[-0xe], ebp)
            case 4, 6
                char eax_138 = *(ebp[-0xc] + 0x19)
                char edx_30 = *(ebp[-0xc] + 0x1a)
                ebp[-2] -= zx.d(eax_138) + zx.d(edx_30)
                sub_48f3d4(zx.d(eax_138) + zx.d(edx_30), 
                    zx.d(*(ebp[-0xc] + 0x19)) + zx.d(*(ebp[-0xc] + 0x1a)), *(ebp[-0xc] + 0x20), ebp)
                int32_t eax_144 = neg.d(zx.d(*(ebp[-0xc] + 0x19)) + zx.d(*(ebp[-0xc] + 0x1a)))
                sub_48f3d4(eax_144, eax_144, *(ebp[-0xc] + 0x1c), ebp)
                uint32_t eax_146 = zx.d(*(ebp[-0xc] + 0x19))
                sub_48f3d4(eax_146, eax_146, ebp[-0xe], ebp)
            case 7
                uint32_t eax_123 = zx.d(*(ebp[-0xc] + 0x1a))
                ebp[-2] -= eax_123
                sub_48f3d4(eax_123, eax_123, *(ebp[-0xc] + 0x20), ebp)
                int32_t eax_126 = neg.d(zx.d(*(ebp[-0xc] + 0x1a)))
                sub_48f3d4(eax_126, eax_126, ebp[-0xe], ebp)
            case 8
                sub_42b99c(*(ebp[-9] + 0x10), 0)
                BeginPath(sub_42c73c(ebp[-9]))
                uint32_t eax_94 = zx.d(*(ebp[-0xc] + 0x1a)) u>> 1
                sub_48f3d4(eax_94, eax_94, ebp[-0xe], ebp)
                EndPath(sub_42c73c(ebp[-9]))
                sub_42b8b8(*(ebp[-9] + 0x10), ebp[-0xe])
                sub_42b9d4(*(ebp[-9] + 0x10), zx.d(*(ebp[-0xc] + 0x1a)))
                StrokePath(sub_42c73c(ebp[-9]))
            case 9
                int32_t i = ebp[-0xf]
                
                if (i s>= 1)
                    do
                        edi_4 = edi_4 s<= 0 ? 0xffffffff : 1
                        
                        esi_5 = esi_5 s<= 0 ? 0xffffffff : 1
                        
                        sub_48f3d4(edi_4, esi_5, *(ebp[-0xc] + 0x20), ebp)
                        i -= 1
                    while (i != 0)
                
                sub_48f3d4(0, 0, ebp[-0xe], ebp)
            case 0xa
                int32_t i_1 = ebp[-0xf]
                
                if (i_1 s>= 1)
                    do
                        edi_4 = edi_4 s<= 0 ? 0xffffffff : 1
                        
                        esi_5 = esi_5 s<= 0 ? 0xffffffff : 1
                        
                        sub_48f3d4(edi_4, esi_5, 
                            sub_48e724(i_1 - 1, *(ebp[-0xc] + 0x1c), *(ebp[-0xc] + 0x20), 
                                ebp[-0xf]), 
                            ebp)
                        i_1 -= 1
                    while (i_1 != 0)
                
                sub_48f3d4(0, 0, ebp[-0xe], ebp)
            default
                sub_48f3d4(0, 0, ebp[-0xe], ebp)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_8c_4 = 0x48fadb
        
        if (ebp[-0xd] != 0 && DeleteObject(ebp[-0xd]) != 0)
            HRGN hrgn = nullptr
            ExceptionList = sub_42c73c(ebp[-9])
            SelectClipRgn(ExceptionList, hrgn)
        
        int32_t eax_153 = ebp[-0xc]
        
        if (*(eax_153 + 0x28) == 0)
            return eax_153
        
        int32_t extra = 0
        ExceptionList = sub_42c73c(ebp[-9])
        return SetTextCharacterExtra(ExceptionList, extra)

return eax
