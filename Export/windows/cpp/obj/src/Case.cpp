#include <hxcpp.h>

#ifndef INCLUDED_Case
#include <Case.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void Case_obj::__construct(int x,int y,hx::Null< int >  __o_color)
{
HX_STACK_FRAME("Case","new",0xfb1493c2,"Case.new","Case.hx",22,0x24b699ee)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(__o_color,"color")
int color = __o_color.Default(2236962);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->ligne = x;
	HX_STACK_LINE(25)
	this->colonne = y;
	HX_STACK_LINE(26)
	this->couleur = color;
	HX_STACK_LINE(27)
	this->groupe = (int)1;
}
;
	return null();
}

//Case_obj::~Case_obj() { }

Dynamic Case_obj::__CreateEmpty() { return  new Case_obj; }
hx::ObjectPtr< Case_obj > Case_obj::__new(int x,int y,hx::Null< int >  __o_color)
{  hx::ObjectPtr< Case_obj > result = new Case_obj();
	result->__construct(x,y,__o_color);
	return result;}

Dynamic Case_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Case_obj > result = new Case_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Case_obj::drawOneHexa( Float x,Float y,int radius){
{
		HX_STACK_FRAME("Case","drawOneHexa",0x01db686a,"Case.drawOneHexa","Case.hx",31,0x24b699ee)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(32)
		this->get_graphics()->lineStyle((int)1,(int)0,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(33)
		this->get_graphics()->beginFill(this->couleur,null());
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while((true)){
				HX_STACK_LINE(35)
				if ((!(((_g < (int)6))))){
					HX_STACK_LINE(35)
					break;
				}
				HX_STACK_LINE(35)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(39)
				Float angle = ((Float(((int)2 * ::Math_obj::PI)) / Float((int)6)) * ((i + 0.5)));		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(40)
				Float _g1 = ::Math_obj::cos(angle);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(40)
				Float _g11 = (radius * _g1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(40)
				Float x_i = (x + _g11);		HX_STACK_VAR(x_i,"x_i");
				HX_STACK_LINE(42)
				Float _g2 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(42)
				Float _g3 = (radius * _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(42)
				Float y_i = (y + _g3);		HX_STACK_VAR(y_i,"y_i");
				HX_STACK_LINE(46)
				if (((i == (int)0))){
					HX_STACK_LINE(50)
					int _g4 = ::Std_obj::_int(x_i);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(50)
					int _g5 = ::Std_obj::_int(y_i);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(50)
					this->get_graphics()->moveTo(_g4,_g5);
				}
				else{
					HX_STACK_LINE(53)
					int _g6 = ::Std_obj::_int(x_i);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(53)
					int _g7 = ::Std_obj::_int(y_i);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(53)
					this->get_graphics()->lineTo(_g6,_g7);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Case_obj,drawOneHexa,(void))


Case_obj::Case_obj()
{
}

Dynamic Case_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ligne") ) { return ligne; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groupe") ) { return groupe; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colonne") ) { return colonne; }
		if (HX_FIELD_EQ(inName,"couleur") ) { return couleur; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawOneHexa") ) { return drawOneHexa_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Case_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ligne") ) { ligne=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groupe") ) { groupe=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colonne") ) { colonne=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"couleur") ) { couleur=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Case_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colonne"));
	outFields->push(HX_CSTRING("ligne"));
	outFields->push(HX_CSTRING("couleur"));
	outFields->push(HX_CSTRING("groupe"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Case_obj,colonne),HX_CSTRING("colonne")},
	{hx::fsInt,(int)offsetof(Case_obj,ligne),HX_CSTRING("ligne")},
	{hx::fsInt,(int)offsetof(Case_obj,couleur),HX_CSTRING("couleur")},
	{hx::fsInt,(int)offsetof(Case_obj,groupe),HX_CSTRING("groupe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("colonne"),
	HX_CSTRING("ligne"),
	HX_CSTRING("couleur"),
	HX_CSTRING("groupe"),
	HX_CSTRING("drawOneHexa"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Case_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Case_obj::__mClass,"__mClass");
};

#endif

Class Case_obj::__mClass;

void Case_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Case"), hx::TCanCast< Case_obj> ,sStaticFields,sMemberFields,
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

void Case_obj::__boot()
{
}

