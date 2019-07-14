// Generated by gencjkcisvs.py. Do not edit.

#include <stdint.h>

#define U16(v) (((v) >> 8) & 0xFF), ((v) & 0xFF)
#define U24(v) (((v) >> 16) & 0xFF), (((v) >> 8) & 0xFF), ((v) & 0xFF)
#define U32(v) (((v) >> 24) & 0xFF), (((v) >> 16) & 0xFF), (((v) >> 8) & 0xFF), ((v) & 0xFF)
#define GLYPH(v) U16(v >= 0x2F800 ? (v) - (0x2F800 - 0xFB00) : (v))

// Fallback mappings for CJK Compatibility Ideographs Standardized Variants
// taken from StandardizedVariants-6.3.0.txt.
// Using OpenType format 14 cmap subtable structure to reuse the lookup code
// for fonts. The glyphID field is used to store the corresponding codepoints
// CJK Compatibility Ideographs. To fit codepoints into the 16-bit glyphID
// field, CJK Compatibility Ideographs Supplement (U+2F800..U+2FA1F) will be
// mapped to 0xFB00..0xFD1F.
extern const uint8_t sCJKCompatSVSTable[] = {
  U16(14), // format
  U32(5065), // length
  U32(3), // numVarSelectorRecords
    U24(0xFE00), U32(0), U32(43), // varSelectorRecord[0]
    U24(0xFE01), U32(0), U32(4557), // varSelectorRecord[1]
    U24(0xFE02), U32(0), U32(5001), // varSelectorRecord[2]
  // 0xFE00
  U32(902), // numUVSMappings
    U24(0x349E), GLYPH(0x2F80C),
    U24(0x34B9), GLYPH(0x2F813),
    U24(0x34BB), GLYPH(0x2F9CA),
    U24(0x34DF), GLYPH(0x2F81F),
    U24(0x3515), GLYPH(0x2F824),
    U24(0x36EE), GLYPH(0x2F867),
    U24(0x36FC), GLYPH(0x2F868),
    U24(0x3781), GLYPH(0x2F876),
    U24(0x382F), GLYPH(0x2F883),
    U24(0x3862), GLYPH(0x2F888),
    U24(0x387C), GLYPH(0x2F88A),
    U24(0x38C7), GLYPH(0x2F896),
    U24(0x38E3), GLYPH(0x2F89B),
    U24(0x391C), GLYPH(0x2F8A2),
    U24(0x393A), GLYPH(0x2F8A1),
    U24(0x3A2E), GLYPH(0x2F8C2),
    U24(0x3A6C), GLYPH(0x2F8C7),
    U24(0x3AE4), GLYPH(0x2F8D1),
    U24(0x3B08), GLYPH(0x2F8D0),
    U24(0x3B19), GLYPH(0x2F8CE),
    U24(0x3B49), GLYPH(0x2F8DE),
    U24(0x3B9D), GLYPH(0xFAD2),
    U24(0x3C18), GLYPH(0x2F8EE),
    U24(0x3C4E), GLYPH(0x2F8F2),
    U24(0x3D33), GLYPH(0x2F90A),
    U24(0x3D96), GLYPH(0x2F916),
    U24(0x3EAC), GLYPH(0x2F92A),
    U24(0x3EB8), GLYPH(0x2F92C),
    U24(0x3F1B), GLYPH(0x2F933),
    U24(0x3FFC), GLYPH(0x2F93E),
    U24(0x4008), GLYPH(0x2F93F),
    U24(0x4018), GLYPH(0xFAD3),
    U24(0x4039), GLYPH(0xFAD4),
    U24(0x4046), GLYPH(0x2F94B),
    U24(0x4096), GLYPH(0x2F94C),
    U24(0x40E3), GLYPH(0x2F951),
    U24(0x412F), GLYPH(0x2F958),
    U24(0x4202), GLYPH(0x2F960),
    U24(0x4227), GLYPH(0x2F964),
    U24(0x42A0), GLYPH(0x2F967),
    U24(0x4301), GLYPH(0x2F96D),
    U24(0x4334), GLYPH(0x2F971),
    U24(0x4359), GLYPH(0x2F974),
    U24(0x43D5), GLYPH(0x2F981),
    U24(0x43D9), GLYPH(0x2F8D7),
    U24(0x440B), GLYPH(0x2F984),
    U24(0x446B), GLYPH(0x2F98E),
    U24(0x452B), GLYPH(0x2F9A7),
    U24(0x455D), GLYPH(0x2F9AE),
    U24(0x4561), GLYPH(0x2F9AF),
    U24(0x456B), GLYPH(0x2F9B2),
    U24(0x45D7), GLYPH(0x2F9BF),
    U24(0x45F9), GLYPH(0x2F9C2),
    U24(0x4635), GLYPH(0x2F9C8),
    U24(0x46BE), GLYPH(0x2F9CD),
    U24(0x46C7), GLYPH(0x2F9CE),
    U24(0x4995), GLYPH(0x2F9EF),
    U24(0x49E6), GLYPH(0x2F9F2),
    U24(0x4A6E), GLYPH(0x2F9F8),
    U24(0x4A76), GLYPH(0x2F9F9),
    U24(0x4AB2), GLYPH(0x2F9FC),
    U24(0x4B33), GLYPH(0x2FA03),
    U24(0x4BCE), GLYPH(0x2FA08),
    U24(0x4CCE), GLYPH(0x2FA0D),
    U24(0x4CED), GLYPH(0x2FA0E),
    U24(0x4CF8), GLYPH(0x2FA11),
    U24(0x4D56), GLYPH(0x2FA16),
    U24(0x4E0D), GLYPH(0xF967),
    U24(0x4E26), GLYPH(0xFA70),
    U24(0x4E32), GLYPH(0xF905),
    U24(0x4E38), GLYPH(0x2F801),
    U24(0x4E39), GLYPH(0xF95E),
    U24(0x4E3D), GLYPH(0x2F800),
    U24(0x4E41), GLYPH(0x2F802),
    U24(0x4E82), GLYPH(0xF91B),
    U24(0x4E86), GLYPH(0xF9BA),
    U24(0x4EAE), GLYPH(0xF977),
    U24(0x4EC0), GLYPH(0xF9FD),
    U24(0x4ECC), GLYPH(0x2F819),
    U24(0x4EE4), GLYPH(0xF9A8),
    U24(0x4F60), GLYPH(0x2F804),
    U24(0x4F80), GLYPH(0xFA73),
    U24(0x4F86), GLYPH(0xF92D),
    U24(0x4F8B), GLYPH(0xF9B5),
    U24(0x4FAE), GLYPH(0xFA30),
    U24(0x4FBB), GLYPH(0x2F806),
    U24(0x4FBF), GLYPH(0xF965),
    U24(0x5002), GLYPH(0x2F807),
    U24(0x502B), GLYPH(0xF9D4),
    U24(0x507A), GLYPH(0x2F808),
    U24(0x5099), GLYPH(0x2F809),
    U24(0x50CF), GLYPH(0x2F80B),
    U24(0x50DA), GLYPH(0xF9BB),
    U24(0x50E7), GLYPH(0xFA31),
    U24(0x5140), GLYPH(0xFA0C),
    U24(0x5145), GLYPH(0xFA74),
    U24(0x514D), GLYPH(0xFA32),
    U24(0x5154), GLYPH(0x2F80F),
    U24(0x5164), GLYPH(0x2F810),
    U24(0x5167), GLYPH(0x2F814),
    U24(0x5168), GLYPH(0xFA72),
    U24(0x5169), GLYPH(0xF978),
    U24(0x516D), GLYPH(0xF9D1),
    U24(0x5177), GLYPH(0x2F811),
    U24(0x5180), GLYPH(0xFA75),
    U24(0x518D), GLYPH(0x2F815),
    U24(0x5192), GLYPH(0x2F8D2),
    U24(0x5195), GLYPH(0x2F8D3),
    U24(0x5197), GLYPH(0x2F817),
    U24(0x51A4), GLYPH(0x2F818),
    U24(0x51AC), GLYPH(0x2F81A),
    U24(0x51B5), GLYPH(0xFA71),
    U24(0x51B7), GLYPH(0xF92E),
    U24(0x51C9), GLYPH(0xF979),
    U24(0x51CC), GLYPH(0xF955),
    U24(0x51DC), GLYPH(0xF954),
    U24(0x51DE), GLYPH(0xFA15),
    U24(0x51F5), GLYPH(0x2F81D),
    U24(0x5203), GLYPH(0x2F81E),
    U24(0x5207), GLYPH(0xFA00),
    U24(0x5217), GLYPH(0xF99C),
    U24(0x5229), GLYPH(0xF9DD),
    U24(0x523A), GLYPH(0xF9FF),
    U24(0x523B), GLYPH(0x2F820),
    U24(0x5246), GLYPH(0x2F821),
    U24(0x5272), GLYPH(0x2F822),
    U24(0x5277), GLYPH(0x2F823),
    U24(0x5289), GLYPH(0xF9C7),
    U24(0x529B), GLYPH(0xF98A),
    U24(0x52A3), GLYPH(0xF99D),
    U24(0x52B3), GLYPH(0x2F992),
    U24(0x52C7), GLYPH(0xFA76),
    U24(0x52C9), GLYPH(0xFA33),
    U24(0x52D2), GLYPH(0xF952),
    U24(0x52DE), GLYPH(0xF92F),
    U24(0x52E4), GLYPH(0xFA34),
    U24(0x52F5), GLYPH(0xF97F),
    U24(0x52FA), GLYPH(0xFA77),
    U24(0x5305), GLYPH(0x2F829),
    U24(0x5306), GLYPH(0x2F82A),
    U24(0x5317), GLYPH(0xF963),
    U24(0x533F), GLYPH(0xF9EB),
    U24(0x5349), GLYPH(0x2F82C),
    U24(0x5351), GLYPH(0xFA35),
    U24(0x535A), GLYPH(0x2F82E),
    U24(0x5373), GLYPH(0x2F82F),
    U24(0x5375), GLYPH(0xF91C),
    U24(0x537D), GLYPH(0x2F830),
    U24(0x537F), GLYPH(0x2F831),
    U24(0x53C3), GLYPH(0xF96B),
    U24(0x53CA), GLYPH(0x2F836),
    U24(0x53DF), GLYPH(0x2F837),
    U24(0x53E5), GLYPH(0xF906),
    U24(0x53EB), GLYPH(0x2F839),
    U24(0x53F1), GLYPH(0x2F83A),
    U24(0x5406), GLYPH(0x2F83B),
    U24(0x540F), GLYPH(0xF9DE),
    U24(0x541D), GLYPH(0xF9ED),
    U24(0x5438), GLYPH(0x2F83D),
    U24(0x5442), GLYPH(0xF980),
    U24(0x5448), GLYPH(0x2F83E),
    U24(0x5468), GLYPH(0x2F83F),
    U24(0x549E), GLYPH(0x2F83C),
    U24(0x54A2), GLYPH(0x2F840),
    U24(0x54BD), GLYPH(0xF99E),
    U24(0x54F6), GLYPH(0x2F841),
    U24(0x5510), GLYPH(0x2F842),
    U24(0x5553), GLYPH(0x2F843),
    U24(0x5555), GLYPH(0xFA79),
    U24(0x5563), GLYPH(0x2F844),
    U24(0x5584), GLYPH(0x2F845),
    U24(0x5587), GLYPH(0xF90B),
    U24(0x5599), GLYPH(0xFA7A),
    U24(0x559D), GLYPH(0xFA36),
    U24(0x55AB), GLYPH(0x2F848),
    U24(0x55B3), GLYPH(0x2F849),
    U24(0x55C0), GLYPH(0xFA0D),
    U24(0x55C2), GLYPH(0x2F84A),
    U24(0x55E2), GLYPH(0xFA7B),
    U24(0x5606), GLYPH(0xFA37),
    U24(0x5651), GLYPH(0x2F84E),
    U24(0x5668), GLYPH(0xFA38),
    U24(0x5674), GLYPH(0x2F84F),
    U24(0x56F9), GLYPH(0xF9A9),
    U24(0x5716), GLYPH(0x2F84B),
    U24(0x5717), GLYPH(0x2F84D),
    U24(0x578B), GLYPH(0x2F855),
    U24(0x57CE), GLYPH(0x2F852),
    U24(0x57F4), GLYPH(0x2F853),
    U24(0x580D), GLYPH(0x2F854),
    U24(0x5831), GLYPH(0x2F857),
    U24(0x5832), GLYPH(0x2F856),
    U24(0x5840), GLYPH(0xFA39),
    U24(0x585A), GLYPH(0xFA10),
    U24(0x585E), GLYPH(0xF96C),
    U24(0x58A8), GLYPH(0xFA3A),
    U24(0x58AC), GLYPH(0x2F858),
    U24(0x58B3), GLYPH(0xFA7D),
    U24(0x58D8), GLYPH(0xF94A),
    U24(0x58DF), GLYPH(0xF942),
    U24(0x58EE), GLYPH(0x2F851),
    U24(0x58F2), GLYPH(0x2F85A),
    U24(0x58F7), GLYPH(0x2F85B),
    U24(0x5906), GLYPH(0x2F85C),
    U24(0x591A), GLYPH(0x2F85D),
    U24(0x5922), GLYPH(0x2F85E),
    U24(0x5944), GLYPH(0xFA7E),
    U24(0x5948), GLYPH(0xF90C),
    U24(0x5951), GLYPH(0xF909),
    U24(0x5954), GLYPH(0xFA7F),
    U24(0x5962), GLYPH(0x2F85F),
    U24(0x5973), GLYPH(0xF981),
    U24(0x59D8), GLYPH(0x2F865),
    U24(0x59EC), GLYPH(0x2F862),
    U24(0x5A1B), GLYPH(0x2F863),
    U24(0x5A27), GLYPH(0x2F864),
    U24(0x5A62), GLYPH(0xFA80),
    U24(0x5A66), GLYPH(0x2F866),
    U24(0x5AB5), GLYPH(0x2F986),
    U24(0x5B08), GLYPH(0x2F869),
    U24(0x5B28), GLYPH(0xFA81),
    U24(0x5B3E), GLYPH(0x2F86A),
    U24(0x5B85), GLYPH(0xFA04),
    U24(0x5BC3), GLYPH(0x2F86D),
    U24(0x5BD8), GLYPH(0x2F86E),
    U24(0x5BE7), GLYPH(0xF95F),
    U24(0x5BEE), GLYPH(0xF9BC),
    U24(0x5BF3), GLYPH(0x2F870),
    U24(0x5BFF), GLYPH(0x2F872),
    U24(0x5C06), GLYPH(0x2F873),
    U24(0x5C22), GLYPH(0x2F875),
    U24(0x5C3F), GLYPH(0xF9BD),
    U24(0x5C60), GLYPH(0x2F877),
    U24(0x5C62), GLYPH(0xF94B),
    U24(0x5C64), GLYPH(0xFA3B),
    U24(0x5C65), GLYPH(0xF9DF),
    U24(0x5C6E), GLYPH(0xFA3C),
    U24(0x5C8D), GLYPH(0x2F87A),
    U24(0x5CC0), GLYPH(0x2F879),
    U24(0x5D19), GLYPH(0xF9D5),
    U24(0x5D43), GLYPH(0x2F87C),
    U24(0x5D50), GLYPH(0xF921),
    U24(0x5D6B), GLYPH(0x2F87F),
    U24(0x5D6E), GLYPH(0x2F87E),
    U24(0x5D7C), GLYPH(0x2F880),
    U24(0x5DB2), GLYPH(0x2F9F4),
    U24(0x5DBA), GLYPH(0xF9AB),
    U24(0x5DE1), GLYPH(0x2F881),
    U24(0x5DE2), GLYPH(0x2F882),
    U24(0x5DFD), GLYPH(0x2F884),
    U24(0x5E28), GLYPH(0x2F885),
    U24(0x5E3D), GLYPH(0x2F886),
    U24(0x5E69), GLYPH(0x2F887),
    U24(0x5E74), GLYPH(0xF98E),
    U24(0x5EA6), GLYPH(0xFA01),
    U24(0x5EB0), GLYPH(0x2F88B),
    U24(0x5EB3), GLYPH(0x2F88C),
    U24(0x5EB6), GLYPH(0x2F88D),
    U24(0x5EC9), GLYPH(0xF9A2),
    U24(0x5ECA), GLYPH(0xF928),
    U24(0x5ED2), GLYPH(0xFA82),
    U24(0x5ED3), GLYPH(0xFA0B),
    U24(0x5ED9), GLYPH(0xFA83),
    U24(0x5EEC), GLYPH(0xF982),
    U24(0x5EFE), GLYPH(0x2F890),
    U24(0x5F04), GLYPH(0xF943),
    U24(0x5F22), GLYPH(0x2F894),
    U24(0x5F53), GLYPH(0x2F874),
    U24(0x5F62), GLYPH(0x2F899),
    U24(0x5F69), GLYPH(0xFA84),
    U24(0x5F6B), GLYPH(0x2F89A),
    U24(0x5F8B), GLYPH(0xF9D8),
    U24(0x5F9A), GLYPH(0x2F89C),
    U24(0x5FA9), GLYPH(0xF966),
    U24(0x5FAD), GLYPH(0xFA85),
    U24(0x5FCD), GLYPH(0x2F89D),
    U24(0x5FD7), GLYPH(0x2F89E),
    U24(0x5FF5), GLYPH(0xF9A3),
    U24(0x5FF9), GLYPH(0x2F89F),
    U24(0x6012), GLYPH(0xF960),
    U24(0x601C), GLYPH(0xF9AC),
    U24(0x6075), GLYPH(0xFA6B),
    U24(0x6081), GLYPH(0x2F8A0),
    U24(0x6094), GLYPH(0xFA3D),
    U24(0x60C7), GLYPH(0x2F8A5),
    U24(0x60D8), GLYPH(0xFA86),
    U24(0x60E1), GLYPH(0xF9B9),
    U24(0x6108), GLYPH(0xFA88),
    U24(0x6144), GLYPH(0xF9D9),
    U24(0x6148), GLYPH(0x2F8A6),
    U24(0x614C), GLYPH(0x2F8A7),
    U24(0x614E), GLYPH(0xFA87),
    U24(0x6160), GLYPH(0xFA8A),
    U24(0x6168), GLYPH(0xFA3E),
    U24(0x617A), GLYPH(0x2F8AA),
    U24(0x618E), GLYPH(0xFA3F),
    U24(0x6190), GLYPH(0xF98F),
    U24(0x61A4), GLYPH(0x2F8AD),
    U24(0x61AF), GLYPH(0x2F8AE),
    U24(0x61B2), GLYPH(0x2F8AC),
    U24(0x61DE), GLYPH(0x2F8AF),
    U24(0x61F2), GLYPH(0xFA40),
    U24(0x61F6), GLYPH(0xF90D),
    U24(0x6200), GLYPH(0xF990),
    U24(0x6210), GLYPH(0x2F8B2),
    U24(0x621B), GLYPH(0x2F8B3),
    U24(0x622E), GLYPH(0xF9D2),
    U24(0x6234), GLYPH(0xFA8C),
    U24(0x625D), GLYPH(0x2F8B4),
    U24(0x62B1), GLYPH(0x2F8B5),
    U24(0x62C9), GLYPH(0xF925),
    U24(0x62CF), GLYPH(0xF95B),
    U24(0x62D3), GLYPH(0xFA02),
    U24(0x62D4), GLYPH(0x2F8B6),
    U24(0x62FC), GLYPH(0x2F8BA),
    U24(0x62FE), GLYPH(0xF973),
    U24(0x633D), GLYPH(0x2F8B9),
    U24(0x6350), GLYPH(0x2F8B7),
    U24(0x6368), GLYPH(0x2F8BB),
    U24(0x637B), GLYPH(0xF9A4),
    U24(0x6383), GLYPH(0x2F8BC),
    U24(0x63A0), GLYPH(0xF975),
    U24(0x63A9), GLYPH(0x2F8C1),
    U24(0x63C4), GLYPH(0xFA8D),
    U24(0x63C5), GLYPH(0x2F8C0),
    U24(0x63E4), GLYPH(0x2F8BD),
    U24(0x641C), GLYPH(0xFA8E),
    U24(0x6422), GLYPH(0x2F8BF),
    U24(0x6452), GLYPH(0xFA8F),
    U24(0x6469), GLYPH(0x2F8C3),
    U24(0x6477), GLYPH(0x2F8C6),
    U24(0x647E), GLYPH(0x2F8C4),
    U24(0x649A), GLYPH(0xF991),
    U24(0x649D), GLYPH(0x2F8C5),
    U24(0x64C4), GLYPH(0xF930),
    U24(0x654F), GLYPH(0xFA41),
    U24(0x6556), GLYPH(0xFA90),
    U24(0x656C), GLYPH(0x2F8C9),
    U24(0x6578), GLYPH(0xF969),
    U24(0x6599), GLYPH(0xF9BE),
    U24(0x65C5), GLYPH(0xF983),
    U24(0x65E2), GLYPH(0xFA42),
    U24(0x65E3), GLYPH(0x2F8CB),
    U24(0x6613), GLYPH(0xF9E0),
    U24(0x6649), GLYPH(0x2F8CD),
    U24(0x6674), GLYPH(0xFA12),
    U24(0x6688), GLYPH(0xF9C5),
    U24(0x6691), GLYPH(0xFA43),
    U24(0x669C), GLYPH(0x2F8D5),
    U24(0x66B4), GLYPH(0xFA06),
    U24(0x66C6), GLYPH(0xF98B),
    U24(0x66F4), GLYPH(0xF901),
    U24(0x66F8), GLYPH(0x2F8CC),
    U24(0x6700), GLYPH(0x2F8D4),
    U24(0x6717), GLYPH(0xF929),
    U24(0x671B), GLYPH(0xFA93),
    U24(0x6721), GLYPH(0x2F8DA),
    U24(0x674E), GLYPH(0xF9E1),
    U24(0x6753), GLYPH(0x2F8DC),
    U24(0x6756), GLYPH(0xFA94),
    U24(0x675E), GLYPH(0x2F8DB),
    U24(0x677B), GLYPH(0xF9C8),
    U24(0x6785), GLYPH(0x2F8E0),
    U24(0x6797), GLYPH(0xF9F4),
    U24(0x67F3), GLYPH(0xF9C9),
    U24(0x67FA), GLYPH(0x2F8DF),
    U24(0x6817), GLYPH(0xF9DA),
    U24(0x681F), GLYPH(0x2F8E5),
    U24(0x6852), GLYPH(0x2F8E1),
    U24(0x6881), GLYPH(0xF97A),
    U24(0x6885), GLYPH(0xFA44),
    U24(0x688E), GLYPH(0x2F8E4),
    U24(0x68A8), GLYPH(0xF9E2),
    U24(0x6914), GLYPH(0x2F8E6),
    U24(0x6942), GLYPH(0x2F8E8),
    U24(0x69A3), GLYPH(0x2F8E9),
    U24(0x69EA), GLYPH(0x2F8EA),
    U24(0x6A02), GLYPH(0xF914),
    U24(0x6A13), GLYPH(0xF94C),
    U24(0x6AA8), GLYPH(0x2F8EB),
    U24(0x6AD3), GLYPH(0xF931),
    U24(0x6ADB), GLYPH(0x2F8ED),
    U24(0x6B04), GLYPH(0xF91D),
    U24(0x6B21), GLYPH(0x2F8EF),
    U24(0x6B54), GLYPH(0x2F8F1),
    U24(0x6B72), GLYPH(0x2F8F3),
    U24(0x6B77), GLYPH(0xF98C),
    U24(0x6B79), GLYPH(0xFA95),
    U24(0x6B9F), GLYPH(0x2F8F4),
    U24(0x6BAE), GLYPH(0xF9A5),
    U24(0x6BBA), GLYPH(0xF970),
    U24(0x6BBB), GLYPH(0x2F8F6),
    U24(0x6C4E), GLYPH(0x2F8FA),
    U24(0x6C67), GLYPH(0x2F8FE),
    U24(0x6C88), GLYPH(0xF972),
    U24(0x6CBF), GLYPH(0x2F8FC),
    U24(0x6CCC), GLYPH(0xF968),
    U24(0x6CCD), GLYPH(0x2F8FD),
    U24(0x6CE5), GLYPH(0xF9E3),
    U24(0x6D16), GLYPH(0x2F8FF),
    U24(0x6D1B), GLYPH(0xF915),
    U24(0x6D1E), GLYPH(0xFA05),
    U24(0x6D34), GLYPH(0x2F907),
    U24(0x6D3E), GLYPH(0x2F900),
    U24(0x6D41), GLYPH(0xF9CA),
    U24(0x6D69), GLYPH(0x2F903),
    U24(0x6D6A), GLYPH(0xF92A),
    U24(0x6D77), GLYPH(0xFA45),
    U24(0x6D78), GLYPH(0x2F904),
    U24(0x6D85), GLYPH(0x2F905),
    U24(0x6DCB), GLYPH(0xF9F5),
    U24(0x6DDA), GLYPH(0xF94D),
    U24(0x6DEA), GLYPH(0xF9D6),
    U24(0x6DF9), GLYPH(0x2F90E),
    U24(0x6E1A), GLYPH(0xFA46),
    U24(0x6E2F), GLYPH(0x2F908),
    U24(0x6E6E), GLYPH(0x2F909),
    U24(0x6E9C), GLYPH(0xF9CB),
    U24(0x6EBA), GLYPH(0xF9EC),
    U24(0x6EC7), GLYPH(0x2F90C),
    U24(0x6ECB), GLYPH(0xFA99),
    U24(0x6ED1), GLYPH(0xF904),
    U24(0x6EDB), GLYPH(0xFA98),
    U24(0x6F0F), GLYPH(0xF94E),
    U24(0x6F22), GLYPH(0xFA47),
    U24(0x6F23), GLYPH(0xF992),
    U24(0x6F6E), GLYPH(0x2F90F),
    U24(0x6FC6), GLYPH(0x2F912),
    U24(0x6FEB), GLYPH(0xF922),
    U24(0x6FFE), GLYPH(0xF984),
    U24(0x701B), GLYPH(0x2F915),
    U24(0x701E), GLYPH(0xFA9B),
    U24(0x7039), GLYPH(0x2F913),
    U24(0x704A), GLYPH(0x2F917),
    U24(0x7070), GLYPH(0x2F835),
    U24(0x7077), GLYPH(0x2F919),
    U24(0x707D), GLYPH(0x2F918),
    U24(0x7099), GLYPH(0xF9FB),
    U24(0x70AD), GLYPH(0x2F91A),
    U24(0x70C8), GLYPH(0xF99F),
    U24(0x70D9), GLYPH(0xF916),
    U24(0x7145), GLYPH(0x2F91C),
    U24(0x7149), GLYPH(0xF993),
    U24(0x716E), GLYPH(0xFA48),
    U24(0x719C), GLYPH(0x2F91E),
    U24(0x71CE), GLYPH(0xF9C0),
    U24(0x71D0), GLYPH(0xF9EE),
    U24(0x7210), GLYPH(0xF932),
    U24(0x721B), GLYPH(0xF91E),
    U24(0x7228), GLYPH(0x2F920),
    U24(0x722B), GLYPH(0xFA49),
    U24(0x7235), GLYPH(0xFA9E),
    U24(0x7250), GLYPH(0x2F922),
    U24(0x7262), GLYPH(0xF946),
    U24(0x7280), GLYPH(0x2F924),
    U24(0x7295), GLYPH(0x2F925),
    U24(0x72AF), GLYPH(0xFA9F),
    U24(0x72C0), GLYPH(0xF9FA),
    U24(0x72FC), GLYPH(0xF92B),
    U24(0x732A), GLYPH(0xFA16),
    U24(0x7375), GLYPH(0xF9A7),
    U24(0x737A), GLYPH(0x2F928),
    U24(0x7387), GLYPH(0xF961),
    U24(0x738B), GLYPH(0x2F929),
    U24(0x73A5), GLYPH(0x2F92B),
    U24(0x73B2), GLYPH(0xF9AD),
    U24(0x73DE), GLYPH(0xF917),
    U24(0x7406), GLYPH(0xF9E4),
    U24(0x7409), GLYPH(0xF9CC),
    U24(0x7422), GLYPH(0xFA4A),
    U24(0x7447), GLYPH(0x2F92E),
    U24(0x745C), GLYPH(0x2F92F),
    U24(0x7469), GLYPH(0xF9AE),
    U24(0x7471), GLYPH(0xFAA1),
    U24(0x7485), GLYPH(0x2F931),
    U24(0x7489), GLYPH(0xF994),
    U24(0x7498), GLYPH(0xF9EF),
    U24(0x74CA), GLYPH(0x2F932),
    U24(0x7506), GLYPH(0xFAA2),
    U24(0x7524), GLYPH(0x2F934),
    U24(0x753B), GLYPH(0xFAA3),
    U24(0x753E), GLYPH(0x2F936),
    U24(0x7559), GLYPH(0xF9CD),
    U24(0x7565), GLYPH(0xF976),
    U24(0x7570), GLYPH(0xF962),
    U24(0x75E2), GLYPH(0xF9E5),
    U24(0x7610), GLYPH(0x2F93A),
    U24(0x761D), GLYPH(0xFAA4),
    U24(0x761F), GLYPH(0xFAA5),
    U24(0x7642), GLYPH(0xF9C1),
    U24(0x7669), GLYPH(0xF90E),
    U24(0x76CA), GLYPH(0xFA17),
    U24(0x76DB), GLYPH(0xFAA7),
    U24(0x76E7), GLYPH(0xF933),
    U24(0x76F4), GLYPH(0xFAA8),
    U24(0x7701), GLYPH(0xF96D),
    U24(0x771E), GLYPH(0x2F945),
    U24(0x771F), GLYPH(0x2F946),
    U24(0x7740), GLYPH(0xFAAA),
    U24(0x774A), GLYPH(0xFAA9),
    U24(0x778B), GLYPH(0x2F94A),
    U24(0x77A7), GLYPH(0xFA9D),
    U24(0x784E), GLYPH(0x2F94E),
    U24(0x786B), GLYPH(0xF9CE),
    U24(0x788C), GLYPH(0xF93B),
    U24(0x7891), GLYPH(0xFA4B),
    U24(0x78CA), GLYPH(0xF947),
    U24(0x78CC), GLYPH(0xFAAB),
    U24(0x78FB), GLYPH(0xF964),
    U24(0x792A), GLYPH(0xF985),
    U24(0x793C), GLYPH(0xFA18),
    U24(0x793E), GLYPH(0xFA4C),
    U24(0x7948), GLYPH(0xFA4E),
    U24(0x7949), GLYPH(0xFA4D),
    U24(0x7950), GLYPH(0xFA4F),
    U24(0x7956), GLYPH(0xFA50),
    U24(0x795D), GLYPH(0xFA51),
    U24(0x795E), GLYPH(0xFA19),
    U24(0x7965), GLYPH(0xFA1A),
    U24(0x797F), GLYPH(0xF93C),
    U24(0x798D), GLYPH(0xFA52),
    U24(0x798E), GLYPH(0xFA53),
    U24(0x798F), GLYPH(0xFA1B),
    U24(0x79AE), GLYPH(0xF9B6),
    U24(0x79CA), GLYPH(0xF995),
    U24(0x79EB), GLYPH(0x2F957),
    U24(0x7A1C), GLYPH(0xF956),
    U24(0x7A40), GLYPH(0xFA54),
    U24(0x7A4A), GLYPH(0x2F95A),
    U24(0x7A4F), GLYPH(0x2F95B),
    U24(0x7A81), GLYPH(0xFA55),
    U24(0x7AB1), GLYPH(0xFAAC),
    U24(0x7ACB), GLYPH(0xF9F7),
    U24(0x7AEE), GLYPH(0x2F95F),
    U24(0x7B20), GLYPH(0xF9F8),
    U24(0x7BC0), GLYPH(0xFA56),
    U24(0x7BC6), GLYPH(0x2F962),
    U24(0x7BC9), GLYPH(0x2F963),
    U24(0x7C3E), GLYPH(0xF9A6),
    U24(0x7C60), GLYPH(0xF944),
    U24(0x7C7B), GLYPH(0xFAAE),
    U24(0x7C92), GLYPH(0xF9F9),
    U24(0x7CBE), GLYPH(0xFA1D),
    U24(0x7CD2), GLYPH(0x2F966),
    U24(0x7CD6), GLYPH(0xFA03),
    U24(0x7CE3), GLYPH(0x2F969),
    U24(0x7CE7), GLYPH(0xF97B),
    U24(0x7CE8), GLYPH(0x2F968),
    U24(0x7D00), GLYPH(0x2F96A),
    U24(0x7D10), GLYPH(0xF9CF),
    U24(0x7D22), GLYPH(0xF96A),
    U24(0x7D2F), GLYPH(0xF94F),
    U24(0x7D5B), GLYPH(0xFAAF),
    U24(0x7D63), GLYPH(0x2F96C),
    U24(0x7DA0), GLYPH(0xF93D),
    U24(0x7DBE), GLYPH(0xF957),
    U24(0x7DC7), GLYPH(0x2F96E),
    U24(0x7DF4), GLYPH(0xF996),
    U24(0x7E02), GLYPH(0x2F96F),
    U24(0x7E09), GLYPH(0xFA58),
    U24(0x7E37), GLYPH(0xF950),
    U24(0x7E41), GLYPH(0xFA59),
    U24(0x7E45), GLYPH(0x2F970),
    U24(0x7F3E), GLYPH(0xFAB1),
    U24(0x7F72), GLYPH(0xFA5A),
    U24(0x7F79), GLYPH(0xF9E6),
    U24(0x7F7A), GLYPH(0x2F976),
    U24(0x7F85), GLYPH(0xF90F),
    U24(0x7F95), GLYPH(0x2F978),
    U24(0x7F9A), GLYPH(0xF9AF),
    U24(0x7FBD), GLYPH(0xFA1E),
    U24(0x7FFA), GLYPH(0x2F979),
    U24(0x8001), GLYPH(0xF934),
    U24(0x8005), GLYPH(0xFA5B),
    U24(0x8046), GLYPH(0xF9B0),
    U24(0x8060), GLYPH(0x2F97D),
    U24(0x806F), GLYPH(0xF997),
    U24(0x8070), GLYPH(0x2F97F),
    U24(0x807E), GLYPH(0xF945),
    U24(0x808B), GLYPH(0xF953),
    U24(0x80AD), GLYPH(0x2F8D6),
    U24(0x80B2), GLYPH(0x2F982),
    U24(0x8103), GLYPH(0x2F983),
    U24(0x813E), GLYPH(0x2F985),
    U24(0x81D8), GLYPH(0xF926),
    U24(0x81E8), GLYPH(0xF9F6),
    U24(0x81ED), GLYPH(0xFA5C),
    U24(0x8201), GLYPH(0x2F893),
    U24(0x8204), GLYPH(0x2F98C),
    U24(0x8218), GLYPH(0xFA6D),
    U24(0x826F), GLYPH(0xF97C),
    U24(0x8279), GLYPH(0xFA5D),
    U24(0x828B), GLYPH(0x2F990),
    U24(0x8291), GLYPH(0x2F98F),
    U24(0x829D), GLYPH(0x2F991),
    U24(0x82B1), GLYPH(0x2F993),
    U24(0x82B3), GLYPH(0x2F994),
    U24(0x82BD), GLYPH(0x2F995),
    U24(0x82E5), GLYPH(0xF974),
    U24(0x82E6), GLYPH(0x2F996),
    U24(0x831D), GLYPH(0x2F999),
    U24(0x8323), GLYPH(0x2F99C),
    U24(0x8336), GLYPH(0xF9FE),
    U24(0x8352), GLYPH(0xFAB3),
    U24(0x8353), GLYPH(0x2F9A0),
    U24(0x8363), GLYPH(0x2F99A),
    U24(0x83AD), GLYPH(0x2F99B),
    U24(0x83BD), GLYPH(0x2F99D),
    U24(0x83C9), GLYPH(0xF93E),
    U24(0x83CA), GLYPH(0x2F9A1),
    U24(0x83CC), GLYPH(0x2F9A2),
    U24(0x83DC), GLYPH(0x2F9A3),
    U24(0x83E7), GLYPH(0x2F99E),
    U24(0x83EF), GLYPH(0xFAB4),
    U24(0x83F1), GLYPH(0xF958),
    U24(0x843D), GLYPH(0xF918),
    U24(0x8449), GLYPH(0xF96E),
    U24(0x8457), GLYPH(0xFA5F),
    U24(0x84EE), GLYPH(0xF999),
    U24(0x84F1), GLYPH(0x2F9A8),
    U24(0x84F3), GLYPH(0x2F9A9),
    U24(0x84FC), GLYPH(0xF9C2),
    U24(0x8516), GLYPH(0x2F9AA),
    U24(0x8564), GLYPH(0x2F9AC),
    U24(0x85CD), GLYPH(0xF923),
    U24(0x85FA), GLYPH(0xF9F0),
    U24(0x8606), GLYPH(0xF935),
    U24(0x8612), GLYPH(0xFA20),
    U24(0x862D), GLYPH(0xF91F),
    U24(0x863F), GLYPH(0xF910),
    U24(0x8650), GLYPH(0x2F9B3),
    U24(0x865C), GLYPH(0xF936),
    U24(0x8667), GLYPH(0x2F9B5),
    U24(0x8669), GLYPH(0x2F9B6),
    U24(0x8688), GLYPH(0x2F9B8),
    U24(0x86A9), GLYPH(0x2F9B7),
    U24(0x86E2), GLYPH(0x2F9BA),
    U24(0x870E), GLYPH(0x2F9B9),
    U24(0x8728), GLYPH(0x2F9BC),
    U24(0x876B), GLYPH(0x2F9BD),
    U24(0x8779), GLYPH(0xFAB5),
    U24(0x8786), GLYPH(0x2F9BE),
    U24(0x87BA), GLYPH(0xF911),
    U24(0x87E1), GLYPH(0x2F9C0),
    U24(0x8801), GLYPH(0x2F9C1),
    U24(0x881F), GLYPH(0xF927),
    U24(0x884C), GLYPH(0xFA08),
    U24(0x8860), GLYPH(0x2F9C3),
    U24(0x8863), GLYPH(0x2F9C4),
    U24(0x88C2), GLYPH(0xF9A0),
    U24(0x88CF), GLYPH(0xF9E7),
    U24(0x88D7), GLYPH(0x2F9C6),
    U24(0x88DE), GLYPH(0x2F9C7),
    U24(0x88E1), GLYPH(0xF9E8),
    U24(0x88F8), GLYPH(0xF912),
    U24(0x88FA), GLYPH(0x2F9C9),
    U24(0x8910), GLYPH(0xFA60),
    U24(0x8941), GLYPH(0xFAB6),
    U24(0x8964), GLYPH(0xF924),
    U24(0x8986), GLYPH(0xFAB7),
    U24(0x898B), GLYPH(0xFA0A),
    U24(0x8996), GLYPH(0xFA61),
    U24(0x8AA0), GLYPH(0x2F9CF),
    U24(0x8AAA), GLYPH(0xF96F),
    U24(0x8ABF), GLYPH(0xFAB9),
    U24(0x8ACB), GLYPH(0xFABB),
    U24(0x8AD2), GLYPH(0xF97D),
    U24(0x8AD6), GLYPH(0xF941),
    U24(0x8AED), GLYPH(0xFABE),
    U24(0x8AF8), GLYPH(0xFA22),
    U24(0x8AFE), GLYPH(0xF95D),
    U24(0x8B01), GLYPH(0xFA62),
    U24(0x8B39), GLYPH(0xFA63),
    U24(0x8B58), GLYPH(0xF9FC),
    U24(0x8B80), GLYPH(0xF95A),
    U24(0x8B8A), GLYPH(0xFAC0),
    U24(0x8C48), GLYPH(0xF900),
    U24(0x8C55), GLYPH(0x2F9D2),
    U24(0x8CAB), GLYPH(0x2F9D4),
    U24(0x8CC1), GLYPH(0x2F9D5),
    U24(0x8CC2), GLYPH(0xF948),
    U24(0x8CC8), GLYPH(0xF903),
    U24(0x8CD3), GLYPH(0xFA64),
    U24(0x8D08), GLYPH(0xFA65),
    U24(0x8D1B), GLYPH(0x2F9D6),
    U24(0x8D77), GLYPH(0x2F9D7),
    U24(0x8DBC), GLYPH(0x2F9DB),
    U24(0x8DCB), GLYPH(0x2F9DA),
    U24(0x8DEF), GLYPH(0xF937),
    U24(0x8DF0), GLYPH(0x2F9DC),
    U24(0x8ECA), GLYPH(0xF902),
    U24(0x8ED4), GLYPH(0x2F9DE),
    U24(0x8F26), GLYPH(0xF998),
    U24(0x8F2A), GLYPH(0xF9D7),
    U24(0x8F38), GLYPH(0xFAC2),
    U24(0x8F3B), GLYPH(0xFA07),
    U24(0x8F62), GLYPH(0xF98D),
    U24(0x8F9E), GLYPH(0x2F98D),
    U24(0x8FB0), GLYPH(0xF971),
    U24(0x8FB6), GLYPH(0xFA66),
    U24(0x9023), GLYPH(0xF99A),
    U24(0x9038), GLYPH(0xFA25),
    U24(0x9072), GLYPH(0xFAC3),
    U24(0x907C), GLYPH(0xF9C3),
    U24(0x908F), GLYPH(0xF913),
    U24(0x9094), GLYPH(0x2F9E2),
    U24(0x90CE), GLYPH(0xF92C),
    U24(0x90DE), GLYPH(0xFA2E),
    U24(0x90F1), GLYPH(0x2F9E3),
    U24(0x90FD), GLYPH(0xFA26),
    U24(0x9111), GLYPH(0x2F9E4),
    U24(0x911B), GLYPH(0x2F9E6),
    U24(0x916A), GLYPH(0xF919),
    U24(0x9199), GLYPH(0xFAC4),
    U24(0x91B4), GLYPH(0xF9B7),
    U24(0x91CC), GLYPH(0xF9E9),
    U24(0x91CF), GLYPH(0xF97E),
    U24(0x91D1), GLYPH(0xF90A),
    U24(0x9234), GLYPH(0xF9B1),
    U24(0x9238), GLYPH(0x2F9E7),
    U24(0x9276), GLYPH(0xFAC5),
    U24(0x927C), GLYPH(0x2F9EA),
    U24(0x92D7), GLYPH(0x2F9E8),
    U24(0x92D8), GLYPH(0x2F9E9),
    U24(0x9304), GLYPH(0xF93F),
    U24(0x934A), GLYPH(0xF99B),
    U24(0x93F9), GLYPH(0x2F9EB),
    U24(0x9415), GLYPH(0x2F9EC),
    U24(0x958B), GLYPH(0x2F9EE),
    U24(0x95AD), GLYPH(0xF986),
    U24(0x95B7), GLYPH(0x2F9F0),
    U24(0x962E), GLYPH(0xF9C6),
    U24(0x964B), GLYPH(0xF951),
    U24(0x964D), GLYPH(0xFA09),
    U24(0x9675), GLYPH(0xF959),
    U24(0x9678), GLYPH(0xF9D3),
    U24(0x967C), GLYPH(0xFAC6),
    U24(0x9686), GLYPH(0xF9DC),
    U24(0x96A3), GLYPH(0xF9F1),
    U24(0x96B7), GLYPH(0xFA2F),
    U24(0x96B8), GLYPH(0xF9B8),
    U24(0x96C3), GLYPH(0x2F9F3),
    U24(0x96E2), GLYPH(0xF9EA),
    U24(0x96E3), GLYPH(0xFA68),
    U24(0x96F6), GLYPH(0xF9B2),
    U24(0x96F7), GLYPH(0xF949),
    U24(0x9723), GLYPH(0x2F9F5),
    U24(0x9732), GLYPH(0xF938),
    U24(0x9748), GLYPH(0xF9B3),
    U24(0x9756), GLYPH(0xFA1C),
    U24(0x97DB), GLYPH(0xFAC9),
    U24(0x97E0), GLYPH(0x2F9FA),
    U24(0x97FF), GLYPH(0xFA69),
    U24(0x980B), GLYPH(0xFACB),
    U24(0x9818), GLYPH(0xF9B4),
    U24(0x9829), GLYPH(0x2FA00),
    U24(0x983B), GLYPH(0xFA6A),
    U24(0x985E), GLYPH(0xF9D0),
    U24(0x98E2), GLYPH(0x2FA02),
    U24(0x98EF), GLYPH(0xFA2A),
    U24(0x98FC), GLYPH(0xFA2B),
    U24(0x9928), GLYPH(0xFA2C),
    U24(0x9929), GLYPH(0x2FA04),
    U24(0x99A7), GLYPH(0x2FA05),
    U24(0x99C2), GLYPH(0x2FA06),
    U24(0x99F1), GLYPH(0xF91A),
    U24(0x99FE), GLYPH(0x2FA07),
    U24(0x9A6A), GLYPH(0xF987),
    U24(0x9B12), GLYPH(0xFACD),
    U24(0x9B6F), GLYPH(0xF939),
    U24(0x9C40), GLYPH(0x2FA0B),
    U24(0x9C57), GLYPH(0xF9F2),
    U24(0x9CFD), GLYPH(0x2FA0C),
    U24(0x9D67), GLYPH(0x2FA0F),
    U24(0x9DB4), GLYPH(0xFA2D),
    U24(0x9DFA), GLYPH(0xF93A),
    U24(0x9E1E), GLYPH(0xF920),
    U24(0x9E7F), GLYPH(0xF940),
    U24(0x9E97), GLYPH(0xF988),
    U24(0x9E9F), GLYPH(0xF9F3),
    U24(0x9EBB), GLYPH(0x2FA15),
    U24(0x9ECE), GLYPH(0xF989),
    U24(0x9EF9), GLYPH(0x2FA17),
    U24(0x9EFE), GLYPH(0x2FA18),
    U24(0x9F05), GLYPH(0x2FA19),
    U24(0x9F0F), GLYPH(0x2FA1A),
    U24(0x9F16), GLYPH(0x2FA1B),
    U24(0x9F3B), GLYPH(0x2FA1C),
    U24(0x9F43), GLYPH(0xFAD8),
    U24(0x9F8D), GLYPH(0xF9C4),
    U24(0x9F8E), GLYPH(0xFAD9),
    U24(0x9F9C), GLYPH(0xF907),
    U24(0x20122), GLYPH(0x2F803),
    U24(0x2051C), GLYPH(0x2F812),
    U24(0x20525), GLYPH(0x2F91B),
    U24(0x2054B), GLYPH(0x2F816),
    U24(0x2063A), GLYPH(0x2F80D),
    U24(0x20804), GLYPH(0x2F9D9),
    U24(0x208DE), GLYPH(0x2F9DD),
    U24(0x20A2C), GLYPH(0x2F834),
    U24(0x20B63), GLYPH(0x2F838),
    U24(0x214E4), GLYPH(0x2F859),
    U24(0x216A8), GLYPH(0x2F860),
    U24(0x216EA), GLYPH(0x2F861),
    U24(0x219C8), GLYPH(0x2F86C),
    U24(0x21B18), GLYPH(0x2F871),
    U24(0x21D0B), GLYPH(0x2F8F8),
    U24(0x21DE4), GLYPH(0x2F87B),
    U24(0x21DE6), GLYPH(0x2F87D),
    U24(0x22183), GLYPH(0x2F889),
    U24(0x2219F), GLYPH(0x2F939),
    U24(0x22331), GLYPH(0x2F891),
    U24(0x226D4), GLYPH(0x2F8A4),
    U24(0x22844), GLYPH(0xFAD0),
    U24(0x2284A), GLYPH(0xFACF),
    U24(0x22B0C), GLYPH(0x2F8B8),
    U24(0x22BF1), GLYPH(0x2F8BE),
    U24(0x2300A), GLYPH(0x2F8CA),
    U24(0x232B8), GLYPH(0x2F897),
    U24(0x2335F), GLYPH(0x2F980),
    U24(0x23393), GLYPH(0x2F989),
    U24(0x2339C), GLYPH(0x2F98A),
    U24(0x233C3), GLYPH(0x2F8DD),
    U24(0x233D5), GLYPH(0xFAD1),
    U24(0x2346D), GLYPH(0x2F8E3),
    U24(0x236A3), GLYPH(0x2F8EC),
    U24(0x238A7), GLYPH(0x2F8F0),
    U24(0x23A8D), GLYPH(0x2F8F7),
    U24(0x23AFA), GLYPH(0x2F8F9),
    U24(0x23CBC), GLYPH(0x2F8FB),
    U24(0x23D1E), GLYPH(0x2F906),
    U24(0x23ED1), GLYPH(0x2F90D),
    U24(0x23F5E), GLYPH(0x2F910),
    U24(0x23F8E), GLYPH(0x2F911),
    U24(0x24263), GLYPH(0x2F91D),
    U24(0x242EE), GLYPH(0xFA6C),
    U24(0x243AB), GLYPH(0x2F91F),
    U24(0x24608), GLYPH(0x2F923),
    U24(0x24735), GLYPH(0x2F926),
    U24(0x24814), GLYPH(0x2F927),
    U24(0x24C36), GLYPH(0x2F935),
    U24(0x24C92), GLYPH(0x2F937),
    U24(0x24FA1), GLYPH(0x2F93B),
    U24(0x24FB8), GLYPH(0x2F93C),
    U24(0x25044), GLYPH(0x2F93D),
    U24(0x250F2), GLYPH(0x2F942),
    U24(0x250F3), GLYPH(0x2F941),
    U24(0x25119), GLYPH(0x2F943),
    U24(0x25133), GLYPH(0x2F944),
    U24(0x25249), GLYPH(0xFAD5),
    U24(0x2541D), GLYPH(0x2F94D),
    U24(0x25626), GLYPH(0x2F952),
    U24(0x2569A), GLYPH(0x2F954),
    U24(0x256C5), GLYPH(0x2F955),
    U24(0x2597C), GLYPH(0x2F95C),
    U24(0x25AA7), GLYPH(0x2F95D),
    U24(0x25BAB), GLYPH(0x2F961),
    U24(0x25C80), GLYPH(0x2F965),
    U24(0x25CD0), GLYPH(0xFAD6),
    U24(0x25F86), GLYPH(0x2F96B),
    U24(0x261DA), GLYPH(0x2F898),
    U24(0x26228), GLYPH(0x2F972),
    U24(0x26247), GLYPH(0x2F973),
    U24(0x262D9), GLYPH(0x2F975),
    U24(0x2633E), GLYPH(0x2F977),
    U24(0x264DA), GLYPH(0x2F97B),
    U24(0x26523), GLYPH(0x2F97C),
    U24(0x265A8), GLYPH(0x2F97E),
    U24(0x267A7), GLYPH(0x2F987),
    U24(0x267B5), GLYPH(0x2F988),
    U24(0x26B3C), GLYPH(0x2F997),
    U24(0x26C36), GLYPH(0x2F9A4),
    U24(0x26CD5), GLYPH(0x2F9A6),
    U24(0x26D6B), GLYPH(0x2F9A5),
    U24(0x26F2C), GLYPH(0x2F9AD),
    U24(0x26FB1), GLYPH(0x2F9B0),
    U24(0x270D2), GLYPH(0x2F9B1),
    U24(0x273CA), GLYPH(0x2F9AB),
    U24(0x27667), GLYPH(0x2F9C5),
    U24(0x278AE), GLYPH(0x2F9CB),
    U24(0x27966), GLYPH(0x2F9CC),
    U24(0x27CA8), GLYPH(0x2F9D3),
    U24(0x27ED3), GLYPH(0xFAD7),
    U24(0x27F2F), GLYPH(0x2F9D8),
    U24(0x285D2), GLYPH(0x2F9E0),
    U24(0x285ED), GLYPH(0x2F9E1),
    U24(0x2872E), GLYPH(0x2F9E5),
    U24(0x28BFA), GLYPH(0x2F9ED),
    U24(0x28D77), GLYPH(0x2F9F1),
    U24(0x29145), GLYPH(0x2F9F6),
    U24(0x291DF), GLYPH(0x2F81C),
    U24(0x2921A), GLYPH(0x2F9F7),
    U24(0x2940A), GLYPH(0x2F9FB),
    U24(0x29496), GLYPH(0x2F9FD),
    U24(0x295B6), GLYPH(0x2FA01),
    U24(0x29B30), GLYPH(0x2FA09),
    U24(0x2A0CE), GLYPH(0x2FA10),
    U24(0x2A105), GLYPH(0x2FA12),
    U24(0x2A20E), GLYPH(0x2FA13),
    U24(0x2A291), GLYPH(0x2FA14),
    U24(0x2A392), GLYPH(0x2F88F),
    U24(0x2A600), GLYPH(0x2FA1D),
  // 0xFE01
  U32(88), // numUVSMappings
    U24(0x3B9D), GLYPH(0x2F8E7),
    U24(0x3EB8), GLYPH(0x2F92D),
    U24(0x4039), GLYPH(0x2F949),
    U24(0x4FAE), GLYPH(0x2F805),
    U24(0x50E7), GLYPH(0x2F80A),
    U24(0x514D), GLYPH(0x2F80E),
    U24(0x51B5), GLYPH(0x2F81B),
    U24(0x5207), GLYPH(0x2F850),
    U24(0x52C7), GLYPH(0x2F825),
    U24(0x52C9), GLYPH(0x2F826),
    U24(0x52E4), GLYPH(0x2F827),
    U24(0x52FA), GLYPH(0x2F828),
    U24(0x5317), GLYPH(0x2F82B),
    U24(0x5351), GLYPH(0x2F82D),
    U24(0x537F), GLYPH(0x2F832),
    U24(0x5584), GLYPH(0x2F846),
    U24(0x5599), GLYPH(0x2F847),
    U24(0x559D), GLYPH(0xFA78),
    U24(0x5606), GLYPH(0x2F84C),
    U24(0x585A), GLYPH(0xFA7C),
    U24(0x5B3E), GLYPH(0x2F86B),
    U24(0x5BE7), GLYPH(0xF9AA),
    U24(0x5C6E), GLYPH(0x2F878),
    U24(0x5ECA), GLYPH(0x2F88E),
    U24(0x5F22), GLYPH(0x2F895),
    U24(0x6094), GLYPH(0x2F8A3),
    U24(0x614C), GLYPH(0x2F8A9),
    U24(0x614E), GLYPH(0x2F8A8),
    U24(0x618E), GLYPH(0xFA89),
    U24(0x61F2), GLYPH(0xFA8B),
    U24(0x61F6), GLYPH(0x2F8B1),
    U24(0x654F), GLYPH(0x2F8C8),
    U24(0x6674), GLYPH(0xFA91),
    U24(0x6691), GLYPH(0x2F8CF),
    U24(0x6717), GLYPH(0xFA92),
    U24(0x671B), GLYPH(0x2F8D9),
    U24(0x6885), GLYPH(0x2F8E2),
    U24(0x6A02), GLYPH(0xF95C),
    U24(0x6BBA), GLYPH(0xFA96),
    U24(0x6D41), GLYPH(0xFA97),
    U24(0x6D77), GLYPH(0x2F901),
    U24(0x6ECB), GLYPH(0x2F90B),
    U24(0x6F22), GLYPH(0xFA9A),
    U24(0x701E), GLYPH(0x2F914),
    U24(0x716E), GLYPH(0xFA9C),
    U24(0x7235), GLYPH(0x2F921),
    U24(0x732A), GLYPH(0xFAA0),
    U24(0x7387), GLYPH(0xF9DB),
    U24(0x7471), GLYPH(0x2F930),
    U24(0x7570), GLYPH(0x2F938),
    U24(0x76CA), GLYPH(0xFAA6),
    U24(0x76F4), GLYPH(0x2F940),
    U24(0x771F), GLYPH(0x2F947),
    U24(0x774A), GLYPH(0x2F948),
    U24(0x788C), GLYPH(0x2F94F),
    U24(0x78CC), GLYPH(0x2F950),
    U24(0x7956), GLYPH(0x2F953),
    U24(0x798F), GLYPH(0x2F956),
    U24(0x7A40), GLYPH(0x2F959),
    U24(0x7BC0), GLYPH(0xFAAD),
    U24(0x7DF4), GLYPH(0xFA57),
    U24(0x8005), GLYPH(0xFAB2),
    U24(0x8201), GLYPH(0x2F98B),
    U24(0x8279), GLYPH(0xFA5E),
    U24(0x82E5), GLYPH(0x2F998),
    U24(0x8457), GLYPH(0x2F99F),
    U24(0x865C), GLYPH(0x2F9B4),
    U24(0x8779), GLYPH(0x2F9BB),
    U24(0x8996), GLYPH(0xFAB8),
    U24(0x8AAA), GLYPH(0xF9A1),
    U24(0x8AED), GLYPH(0x2F9D0),
    U24(0x8AF8), GLYPH(0xFABA),
    U24(0x8AFE), GLYPH(0xFABD),
    U24(0x8B01), GLYPH(0xFABC),
    U24(0x8B39), GLYPH(0xFABF),
    U24(0x8B8A), GLYPH(0x2F9D1),
    U24(0x8D08), GLYPH(0xFAC1),
    U24(0x8F38), GLYPH(0x2F9DF),
    U24(0x9038), GLYPH(0xFA67),
    U24(0x96E3), GLYPH(0xFAC7),
    U24(0x9756), GLYPH(0xFAC8),
    U24(0x97FF), GLYPH(0xFACA),
    U24(0x980B), GLYPH(0x2F9FE),
    U24(0x983B), GLYPH(0xFACC),
    U24(0x9B12), GLYPH(0x2FA0A),
    U24(0x9F9C), GLYPH(0xF908),
    U24(0x22331), GLYPH(0x2F892),
    U24(0x25AA7), GLYPH(0x2F95E),
  // 0xFE02
  U32(12), // numUVSMappings
    U24(0x537F), GLYPH(0x2F833),
    U24(0x5BE7), GLYPH(0x2F86F),
    U24(0x618E), GLYPH(0x2F8AB),
    U24(0x61F2), GLYPH(0x2F8B0),
    U24(0x6717), GLYPH(0x2F8D8),
    U24(0x6A02), GLYPH(0xF9BF),
    U24(0x6BBA), GLYPH(0x2F8F5),
    U24(0x6D41), GLYPH(0x2F902),
    U24(0x7DF4), GLYPH(0xFAB0),
    U24(0x8005), GLYPH(0x2F97A),
    U24(0x980B), GLYPH(0x2F9FF),
    U24(0x9F9C), GLYPH(0xFACE),
};

#undef U16
#undef U24
#undef U32
#undef GLYPH

static_assert(sizeof sCJKCompatSVSTable == 5065, "Table generator has a bug.");