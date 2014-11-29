import nape.shape.Polygon;
import flash.Lib;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.space.Space;
import nape.util.Debug;
import nape.util.ShapeDebug;

import flash.display.Sprite;

class Main extends Sprite {

	private var space = new Space();
	private var debug:ShapeDebug;

	public function new() {
		super();
		init();
	}
	
	private function init(){
		// this.debug = new ShapeDebug(stage.stageWidth, stage.stageHeight);
		// debug.thickness = 10.0;

		// addChild(this.debug.display);

		// var hexagon = new Body(BodyType.STATIC);
		// hexagon.shapes.add(new Polygon(Polygon.regular(90, 90, 6, 90.0)));
		// hexagon.position.setxy(210, 100);
		// hexagon.space = this.space;

		// this.debug.draw(space);
		graphics.beginFill(0x3567EE);
		//drawHexagones(40,40,Std.int(stage.width), stage.height);
		drawOneHexa(100, 100, 20);

	}

	private function drawHexagones(mapx, mapy, w, h):Void 
	{
		for (i in 0...mapx){
			for (j in 0...mapy){
				var radius= Std.int(mapx/w);
				drawOneHexa(i*radius*2, j*radius*2, radius);
			}
		}
	}
	private function drawOneHexa(x, y, radius):Void {
		for (i in 0...6)
		{	
			graphics.beginFill(0x00FF00);
			//graphics.lineStyle( 2,  0x123456);
		    var angle = 2 * Math.PI / 6 * (i + 0.5);
		    var x_i = x + radius * Math.cos(angle);
		    var y_i = y + radius * Math.sin(angle);
		    graphics.lineStyle(1, 0x000000);
		    if (i == 0)
		        graphics.moveTo(x_i, y_i);
		    else
		        graphics.lineTo(x_i, y_i);
    	}
	}
	static function main ()
	{
		Lib.current.stage.addChild(new Main());
	}

}
		// var pentagonBody = new Body();
		// pentagonBody.position.setxy(Math.random() * 300, Math.random() * 300);
		// var pentagonShape = new Polygon(Polygon.regular(25, 25, 6));


		// pentagonShape.body = pentagonBody;
		// pentagonBody.space = this.space;
		// //var hexagon = new DisplayObject(pentagonShape);

		// Lib.current.stage.addChild(pentagonShape);

		// var map = {x: 40, y: 40};
		//graphics.beginFill(0x556677,1);


		// var width =  Std.int(stage.stageWidth / map.x);
		// var height = Std.int(stage.stageHeight / map.y);

		// for (i in 0...width){
		// for (j in 0...height){
		// 	graphics.drawRect(i*map.x +1, j*map.y +1, map.x-2, map.y-2);
		// }
		// }


		// var bitmap = new Bitmap(Assets.getBitmapData("assets/persoTest.jpg"));
		// addChild(bitmap);


		// bitmap.x = 1*width + Std.int(bitmap.width/4);
		// bitmap.y = 2*height + Std.int(bitmap.height/4);

		// var bitmapData = Assets.getBitmapData ("assets/persoTest.jpg");


		// //Déplace l'image avec un ease definissable (vitesse au début, à la fin), de sa position initiale, vers  la position en x, y, en 2 sec
		// Actuate.tween(bitmap,5, {alpha:0.5, x: 10*map.x + Std.int(bitmap.width/4), y: 8*map.y + Std.int(bitmap.height/4)});
		// //(Image a bouger, durée, {Nouveau paramètre d'arrivé : alpha, x, y, etc..})


// 	}
// }