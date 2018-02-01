<?php

/**
 * This file is part of cocur/slugify.
 *
 * (c) Florian Eckerstorfer <florian@eckerstorfer.co>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace Cocur\Slugify\Tests;

use Cocur\Slugify\Slugify;

/**
 * SlugifyTest
 *
 * @category  test
 * @package   org.cocur.slugify
 * @author    Florian Eckerstorfer <florian@eckerstorfer.co>
 * @author    Ivo Bathke <ivo.bathke@gmail.com>
 * @author    Marchenko Alexandr
 * @copyright 2012-2014 Florian Eckerstorfer
 * @license   http://www.opensource.org/licenses/MIT The MIT License
 */
class SlugifyTest extends \PHPUnit_Framework_TestCase
{
    private $slugify;

    public function setUp()
    {
        $this->slugify = new Slugify();
    }

    /**
     * @test
     * @dataProvider provider
     * @covers Cocur\Slugify\Slugify::slugify()
     */
    public function slugifyReturnsSlugifiedString($string, $result)
    {
        $this->assertEquals($result, $this->slugify->slugify($string));
    }

    /**
     * @test
     * @covers Cocur\Slugify\Slugify::addRule()
     * @covers Cocur\Slugify\Slugify::slugify()
     */
    public function addRuleAddsRule()
    {
        $this->slugify->addRule('X', 'y');
        $this->assertEquals('y', $this->slugify->slugify('X'));
    }

    /**
     * @test
     */
    public function createReturnsAnInstance()
    {
        $this->assertInstanceOf('Cocur\\Slugify\\SlugifyInterface', Slugify::create());
        $this->assertEquals('hello-world', Slugify::create()->slugify('Hello World'));
    }

    public function provider()
    {
        return array(
            array(' a  b ', 'a-b'),
            array('Hello', 'hello'),
            array('Hello World', 'hello-world'),
            array('Привет мир', 'privet-mir'),
            array('Привіт світ', 'privit-svit'),
            array('Hello: World', 'hello-world'),
            array('H+e#l1l--o/W§o r.l:d)', 'h-e-l1l-o-w-o-r-l-d'),
            array(': World', 'world'),
            array('Hello World!', 'hello-world'),
            array('Ä ä Ö ö Ü ü ß', 'ae-ae-oe-oe-ue-ue-ss'),
            array('Á À á à É È é è Ó Ò ó ò Ñ ñ Ú Ù ú ù', 'a-a-a-a-e-e-e-e-o-o-o-o-n-n-u-u-u-u'),
            array('Â â Ê ê Ô ô Û û', 'a-a-e-e-o-o-u-u'),
            array('Â â Ê ê Ô ô Û 1', 'a-a-e-e-o-o-u-1'),
            array('°¹²³@', '0123at'),
            array('Mórë thån wørds', 'more-than-words'),
            array('Блоґ їжачка', 'blog-jizhachka'),
            array('фильм', 'film'),
            array('драма', 'drama'),
            array('ελληνικά', 'ellenika'),
            array('C’est du français !', 'c-est-du-francais'),
            array('serĉi manĝi ĥirurgio ĵurnalo ŝuo malgraŭ', 'sercxi-mangxi-hxirurgio-jxurnalo-sxuo-malgraux'),
            array('هذه هي اللغة العربية', 'hthh-hy-llgh-laarby'),
            array('مرحبا العالم', 'mrhb-laa-lm')
        );
    }
}
