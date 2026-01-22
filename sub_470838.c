// 函数: sub_470838
// 地址: 0x470838
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_46cc08(arg1)

if (*data_4ac1d0 != 0)
    if (*(arg1 + 0x271) == 3)
        SendMessageA(sub_45f888(arg1), 0x80, 1, 0)
    else
        HICON lParam = sub_4713f8(arg1)
        SendMessageA(sub_45f888(arg1), 0x80, 1, lParam)

if ((arg1[7].b & 0x10) == 0)
    char eax_7 = *(arg1 + 0x277)
    
    if (eax_7 == 2)
        int32_t var_10 = 0xff00
        int32_t var_14 = 0
        void* esi_1 = arg1[0xa8]
        
        if (esi_1 != 0)
            var_14 = sub_44b944(esi_1)
        
        int32_t eax_11 = sub_45714c(arg1)
        int32_t eax_13 = sub_457190(arg1)
        HWND eax_15 = sub_45f888(arg1)
        arg1[0xa7] = sub_4079ac(nullptr, sub_470a1f+1, WS_EX_CLIENTEDGE, &var_14, data_4af7f4, 
            nullptr, eax_15, eax_13, eax_11, 0, 0, 0x56330001)
        arg1[0xb0] = sub_424a14(sub_46ed34, arg1)
        arg1[0xaf] = GetWindowLongA(arg1[0xa7], 0xfffffffc)
        SetWindowLongA(arg1[0xa7], 0xfffffffc, arg1[0xb0])
    else if (eax_7 == 3)
        SetWindowPos(sub_45f888(arg1), 0xffffffff, 0, 0, 0, 0, 0x13)

void* eax_25 = arg1[0xce]

if (eax_25 != 0)
    if (*(eax_25 + 8) - 1 s>= 0)
        int32_t esi_2 = 0
        int32_t i
        
        do
            i = sub_45c37c(sub_41a0f4(arg1[0xce], esi_2))
            esi_2 += 1
        while (i != 1)
    
    (*(*arg1[0xce] + 8))()

arg1[0xcf]
int32_t eax_30 = sub_405cb8()

if (eax_30 s>= 0)
    int32_t i_2 = eax_30 + 1
    int32_t esi_3 = 0
    int32_t i_1
    
    do
        SendMessageA(*(arg1[0xcf] + (esi_3 << 3) + 4), 0xb049, *(arg1[0xcf] + (esi_3 << 3)), 
            arg1[0x6d])
        esi_3 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int32_t var_18_5 = 0
char result = arg1.b + 0x3c
sub_405e6c()

if ((arg1[7].b & 1) == 0)
    result = sub_478924(sub_478638(arg1))
    
    if (result != 0)
        return sub_4786ec(arg1)

return result
