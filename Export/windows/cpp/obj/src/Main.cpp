#include <hxcpp.h>

#ifndef INCLUDED_Case
#include <Case.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",17,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->space = ::nape::space::Space_obj::__new(null(),null());
	HX_STACK_LINE(21)
	this->hexas = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(28)
	this->init();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",31,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(89)
			int _g = ::Main_obj::NUM_ROWS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int row = (_g1)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(91)
				this->hexas[row] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(93)
					int _g2 = ::Main_obj::NUM_COLUMNS;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(93)
					while((true)){
						HX_STACK_LINE(93)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(93)
							break;
						}
						HX_STACK_LINE(93)
						int column = (_g3)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(95)
						this->hexas->__get(row).StaticCast< Array< ::Dynamic > >()[column] = null();
					}
				}
			}
		}
		HX_STACK_LINE(101)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		int _g1 = (_g - (int)100);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(101)
		int _g3 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(101)
		int _g4 = (_g3 - (int)100);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(101)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(101)
		this->drawHexagones(::Main_obj::NUM_ROWS,::Main_obj::NUM_COLUMNS,_g2,_g5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::drawHexagones( int mapx,int mapy,int w,int h){
{
		HX_STACK_FRAME("Main","drawHexagones",0x593c94d5,"Main.drawHexagones","Main.hx",106,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mapx,"mapx")
		HX_STACK_ARG(mapy,"mapy")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(111)
		int radius = (int)45;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(112)
		Float xhexa;		HX_STACK_VAR(xhexa,"xhexa");
		HX_STACK_LINE(113)
		Float yhexa;		HX_STACK_VAR(yhexa,"yhexa");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			while((true)){
				HX_STACK_LINE(118)
				if ((!(((_g < mapx))))){
					HX_STACK_LINE(118)
					break;
				}
				HX_STACK_LINE(118)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(119)
					while((true)){
						HX_STACK_LINE(119)
						if ((!(((_g1 < mapy))))){
							HX_STACK_LINE(119)
							break;
						}
						HX_STACK_LINE(119)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(120)
						if (((hx::Mod(j,(int)2) == (int)0))){
							HX_STACK_LINE(121)
							Float _g2 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(121)
							Float _g11 = (((i * radius) * (int)2) * _g2);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(121)
							Float _g21 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(121)
							Float _g3 = (_g21 + (radius * (int)2));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(121)
							xhexa = _g3;
							HX_STACK_LINE(122)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						else{
							HX_STACK_LINE(126)
							Float _g4 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(126)
							Float _g5 = (((i * radius) * (int)2) * _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(126)
							Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(126)
							Float _g7 = (_g6 + (radius * (int)2));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(126)
							Float _g8 = (_g7 + radius);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(126)
							Float _g9 = (_g8 - (Float(((int)2 * radius)) / Float((int)15)));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(126)
							xhexa = _g9;
							HX_STACK_LINE(127)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						HX_STACK_LINE(133)
						::Case hexa = ::Case_obj::__new(i,j,(((int)11141120 + (j * (int)1000)) + (i * (int)10000)));		HX_STACK_VAR(hexa,"hexa");
						HX_STACK_LINE(135)
						hexa->drawOneHexa(xhexa,yhexa,radius);
						HX_STACK_LINE(137)
						this->addChild(hexa);
						HX_STACK_LINE(139)
						this->hexas->__get(i).StaticCast< Array< ::Dynamic > >()[j] = hexa;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Main_obj,drawHexagones,(void))

int Main_obj::NUM_COLUMNS;

int Main_obj::NUM_ROWS;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(hexas,"hexas");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(debug,"debug");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hexas,"hexas");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"hexas") ) { return hexas; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUM_ROWS") ) { return NUM_ROWS; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_COLUMNS") ) { return NUM_COLUMNS; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawHexagones") ) { return drawHexagones_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hexas") ) { hexas=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::nape::util::ShapeDebug >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUM_ROWS") ) { NUM_ROWS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_COLUMNS") ) { NUM_COLUMNS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hexas"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("debug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NUM_COLUMNS"),
	HX_CSTRING("NUM_ROWS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,hexas),HX_CSTRING("hexas")},
	{hx::fsObject /*::nape::space::Space*/ ,(int)offsetof(Main_obj,space),HX_CSTRING("space")},
	{hx::fsObject /*::nape::util::ShapeDebug*/ ,(int)offsetof(Main_obj,debug),HX_CSTRING("debug")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hexas"),
	HX_CSTRING("space"),
	HX_CSTRING("debug"),
	HX_CSTRING("init"),
	HX_CSTRING("drawHexagones"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::NUM_COLUMNS,"NUM_COLUMNS");
	HX_MARK_MEMBER_NAME(Main_obj::NUM_ROWS,"NUM_ROWS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::NUM_COLUMNS,"NUM_COLUMNS");
	HX_VISIT_MEMBER_NAME(Main_obj::NUM_ROWS,"NUM_ROWS");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Main_obj::__boot()
{
	NUM_COLUMNS= (int)10;
	NUM_ROWS= (int)10;
}

