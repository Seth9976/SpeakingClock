// 函数: sub_44b3e0
// 地址: 0x44b3e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_4c = ebx
int32_t esi
int32_t var_50 = esi
int32_t edi
int32_t var_54 = edi
int32_t var_48 = 0
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
char ecx
char var_d = ecx
int32_t edx
int32_t var_c = edx
int32_t* var_58 = &var_4
int32_t (* var_5c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x3e) != 0)
    sub_404c20(&var_8, *(arg1 + 0x30))
    
    if (sub_44e490(arg1) s> 0)
        int32_t var_30_1 = sub_44b944(arg1)
    else if (*(arg1 + 0x60) != 0)
        void* ebx_1 = *(arg1 + 0x64)
        char eax_6
        
        if (ebx_1 != 0 && *(ebx_1 + 0x64) == 0)
            eax_6 = sub_403df4(*(ebx_1 + 4), 0x44a270)
        
        if (ebx_1 == 0 || *(ebx_1 + 0x64) != 0 || eax_6 == 0)
            struct _EXCEPTION_REGISTRATION_RECORD* var_64_1 = var_8
            void* const var_68_1 = &data_44b6a8
            ebp_1 = sub_44a9d0(*(arg1 + 0x60), &var_48)
            int32_t var_6c_1 = ebp_1[-0x11]
            sub_404f1c(&ebp_1[-1], 3)
            esp_1 = &ExceptionList
    
    uint16_t eax_10 = zx.w(GetVersion())
    
    if (eax_10 u< 4)
        sub_404fb0(*(arg1 + 0x30), sub_44b6af+5)
        int32_t eax_42
        eax_42.b = eax_10 == 4
        int32_t ebx_5 = *(((eax_42 & 0x7f) << 2) + &data_4ab7a8)
            | *((zx.d(*(arg1 + 0x48)) << 2) + &data_4ab79c)
            | *((zx.d(*(arg1 + 0x38)) << 2) + &data_4ab78c)
            | *((zx.d(*(arg1 + 0x39)) << 2) + &data_4ab794)
        enum MENU_ITEM_FLAGS uFlags = ebx_5 | 0x400
        
        if (sub_44e490(arg1) s<= 0)
            PSTR lpNewItem_1 = sub_405018(ebp_1[-1])
            int32_t var_70_2 = 0xffffffff
            InsertMenuA(ebp_1[-2], 0xffffffff, uFlags, zx.d(*(arg1 + 0x50)), lpNewItem_1)
            esp_1 = &ExceptionList
        else
            PSTR lpNewItem = sub_405018(*(arg1 + 0x30))
            uint32_t uIDNewItem = sub_44b944(arg1)
            int32_t var_70_1 = 0xffffffff
            InsertMenuA(ebp_1[-2], 0xffffffff, uFlags | MF_POPUP, uIDNewItem, lpNewItem)
            esp_1 = &ExceptionList
    else
        ebp_1[-0x10] = 0x2c
        ebp_1[-0xf] = 0x3f
        void* eax_12 = sub_44ea50(arg1)
        ebp_1[-4] = sub_44dc14(arg1)
        int32_t eax_14
        int32_t* ebx_2
        
        if (eax_12 == 0 || (*(eax_12 + 0x40) == 0 && ebp_1[-4] == 0))
            ebx_2 = *(arg1 + 0x4c)
            
            if (ebx_2 != 0)
                eax_14 = (*(*ebx_2 + 0x1c))()
                esp_1 = &var_8
        
        if ((eax_12 != 0 && (*(eax_12 + 0x40) != 0 || ebp_1[-4] != 0))
                || (ebx_2 != 0 && eax_14.b == 0))
            eax_14.b = 1
        else
            eax_14 = 0
        
        char ebx_3 = eax_14.b
        char eax_18 = sub_403df4(*(*(arg1 + 0x64) + 4), 0x44a270)
        bool cond:1_1 = eax_18 == 0
        
        if (eax_18 != 0)
            char eax_19 = sub_40d704(6, 0)
            cond:1_1 = eax_19 == 0
            
            if (eax_19 != 0)
                char temp2_1 = *(sub_4659bc() + 5)
                cond:1_1 = temp2_1 == 0
                
                if (temp2_1 != 0)
                    void* const eax_20
                    
                    if (ebx_3 == 0)
                        eax_20 = nullptr
                        cond:1_1 = true
                    else
                        int32_t temp4_1
                        
                        if (ebp_1[-4] != 0)
                            temp4_1 = *(arg1 + 0x40)
                            cond:1_1 = temp4_1 == 0xffffffff
                        
                        if (ebp_1[-4] != 0 && temp4_1 != 0xffffffff)
                            eax_20.b = 1
                        else
                            int32_t temp3_1 = *(arg1 + 0x4c)
                            cond:1_1 = temp3_1 == 0
                            
                            if (temp3_1 != 0)
                                eax_20.b = 1
                            else
                                char temp5_1 = *(eax_12 + 0x40)
                                cond:1_1 = temp5_1 == 0
                                
                                if (temp5_1 != 0)
                                    eax_20.b = 1
                                else
                                    eax_20 = nullptr
                                    cond:1_1 = true
                    
                    ebx_3 = eax_20.b
        
        sub_404fb0(*(arg1 + 0x30), sub_44b6af+5)
        int32_t eax_22
        eax_22.b = cond:1_1
        int32_t eax_26 = *(((eax_22 & 0x7f) << 2) + &data_4ab7dc)
            | *((zx.d(*(arg1 + 0x3d)) << 2) + &data_4ab7d4)
            | *((zx.d(*(arg1 + 0x48)) << 2) + &data_4ab7b0)
            | *((zx.d(*(ebp_1 - 9)) << 2) + &data_4ab7e4)
        ebp_1[-0xe] = eax_26 | *((zx.d(ebx_3) << 2) + &data_4ab7ec)
        ebp_1[-0xd] = *((zx.d(*(arg1 + 0x38)) << 2) + &data_4ab7bc)
            | *((zx.d(*(arg1 + 0x39)) << 2) + &data_4ab7cc)
            | *((zx.d(*(arg1 + 0x3a)) << 2) + &data_4ab7c4)
        ebp_1[-0xc] = zx.d(*(arg1 + 0x50))
        ebp_1[-0xb] = 0
        ebp_1[-0xa] = 0
        ebp_1[-9] = 0
        ebp_1[-7] = sub_405018(ebp_1[-1])
        
        if (sub_44e490(arg1) s> 0)
            ebp_1[-0xb] = sub_44b944(arg1)
        
        *(esp_1 - 4) = &ebp_1[-0x10]
        *(esp_1 - 8) = 0xffffffff
        *(esp_1 - 0xc) = 0xffffffff
        *(esp_1 - 0x10) = ebp_1[-2]
        InsertMenuItemA()

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_44b699
sub_404b88(&ebp_1[-0x11])
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
